import QtQuick 2.0

Rectangle {
     width: 200
     height: 400
     Rectangle {
        id: box
         x: 18
         y: 17
         width: 130
         height: 119
         radius: 21
         border.width: 14
         border.color: "#000000"
        MouseArea {
            id: mousearea
            anchors.fill: parent

            onPressed: {
                // arbitrary JavaScript expression
                box.border.color = "#00a000";
//                label.text = qt.QDateTime.currentDateTime();
            }
            onReleased: {
                // arbitrary JavaScript expression
                box.border.color = "#000000";
            }
        }
            Text {
                 id: label
                 anchors.centerIn: parent
                 text: "Press Me!"
                }
     }
}
