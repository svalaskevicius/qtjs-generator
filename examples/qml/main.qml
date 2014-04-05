// SSH key generator UI
import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.1
import com.ics.demo 1.0

ApplicationWindow {
    title: qsTr("SSH Key Generator")

    statusBar: StatusBar {
        RowLayout {
            Label {
                id: status
            }
        }
    }

    width: 369
    height: 166

    ColumnLayout {
        x: 10
        y: 10
        anchors.fill: parent

        // Key type
        RowLayout {
            Label {
                text: qsTr("Key type:")
            }
            ComboBox {
                id: combobox
                Layout.fillWidth: true
                model: keygen.types
                currentIndex: 0
            }
        }

        // Filename
        RowLayout {
            Label {
                text: qsTr("Filename:")
            }
            TextField {
                id: filename
                implicitWidth: 200
                onTextChanged: updateStatusBar()
                smooth: true
                antialiasing: true
            }
            Button {
                text: qsTr("Browse...")
                onClicked: filedialog.visible = true
            }
        }

        // Passphrase
        RowLayout {
            Label {
                text: qsTr("Pass phrase:")
            }
            TextField {
                id: passphrase
                Layout.fillWidth: true
                echoMode: TextInput.Password
                onTextChanged: updateStatusBar()
            }
        }

        // Confirm Passphrase
        RowLayout {
            Label {
                text: qsTr("Confirm pass phrase:")
            }
            TextField {
                id: confirm
                Layout.fillWidth: true
                echoMode: TextInput.Password
                onTextChanged: updateStatusBar()
            }
        }

        // Buttons: Generate, Quit
        RowLayout {
            Button {
                id: generate
                text: qsTr("Generate")
                onClicked: keygen.generateKey()
            }
            Button {
                text: qsTr("Quit")
                onClicked: Qt.quit()
            }
            Button {
                text: qsTr("Increment!")
                onClicked: incrementer.increment()
            }
        }

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true
            Rectangle {
                id: lineColumn
                property int rowHeight: textarea.font.pixelSize + 3
                color: "#f2f2f2"
                width: 50
                height: parent.height
                clip: true
                Rectangle {
                    height: parent.height
                    anchors.right: parent.right
                    width: 1
                    color: "#ddd"
                }
                Column {
                    y: -textarea.flickableItem.contentY + 4
                    width: parent.width
                    Repeater {
                        model: Math.max(
                                   textarea.lineCount + 2,
                                   (lineColumn.height / lineColumn.rowHeight))
                        delegate: Text {
                            id: text
                            color: "#666"
                            font: textarea.font
                            width: lineColumn.width
                            horizontalAlignment: Text.AlignHCenter
                            verticalAlignment: Text.AlignVCenter
                            height: lineColumn.rowHeight
                            renderType: Text.NativeRendering
                            text: index
                        }
                    }
                }
            }
            TextArea {
                id: textarea
                objectName: "editor"
                anchors.left: lineColumn.right
                anchors.right: waveangle.left
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                wrapMode: TextEdit.NoWrap
                frameVisible: false
            }
            Waveangle {
                id: waveangle
                width: 100
                height: 100
                anchors.right: parent.right
            }
        }
    }

    FileDialog {
        id: filedialog
        title: qsTr("Select a file")
        selectMultiple: false
        selectFolder: false
        nameFilters: ["All files (*)"]
        selectedNameFilter: "All files (*)"
        onAccepted: {
            filename.text = fileUrl.toString().replace("file://", "")
        }
    }

    KeyGenerator {
        id: keygen
        filename: filename.text
        passphrase: passphrase.text
        type: combobox.currentText
        onKeyGenerated: {
            if (success) {
                status.text = qsTr(
                            '<font color="green">Key generation succeeded.</font>')
            } else {
                status.text = qsTr(
                            '<font color="red">Key generation failed</font>')
            }
        }
    }

    IntIncrementer {
        id: incrementer
        value: 9
        onValueChanged: {
            status.text += "value changed to " + incrementer.value
        }
        onIncremented: {
            status.text += "value changed to " + newValue
        }
    }

    function updateStatusBar() {
        if (passphrase.text != confirm.text) {
            status.text = qsTr(
                        '<font color="red">Pass phrase does not match.</font>')
            generate.enabled = false
        } else if (passphrase.text.length > 0 && passphrase.text.length < 5) {
            status.text = qsTr(
                        '<font color="red">Pass phrase too short.</font>')
            generate.enabled = false
        } else if (filename.text == "") {
            status.text = qsTr('<font color="red">Enter a filename.</font>')
            generate.enabled = false
        } else {
            status.text = ""
            generate.enabled = true
        }
    }

    Component.onCompleted: {
        updateStatusBar()
    }
}
