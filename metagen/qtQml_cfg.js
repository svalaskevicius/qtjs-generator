var config = {
  projectID : "QtQml",

  headerOutput : "build/QtQml/include",
  sourceOutput : "build/QtQml/src",

  metaItemCallback : processCallback,

  cppNamespace : "qt_metadata",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtqml_",
  mainSourceFile : "register_meta_qtqml",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtqml",
  headerHeaderCode : ""
    +"#include <QtCore/include/meta_qtcore_qflags.h>\n"
    +"#include <QtCore/include/meta_qtcore_qcontainerfwd.h>\n"
  ,
  sourceHeaderCode :
     "#include <qtQml_cpgf_compat.h>\n"
    +"#include <QtCore/qglobal.h>\n"
    +"#include <QtCore/QEvent>\n"
    +"#include <QtCore/QDebug>\n"
    +"#include <QtCore/QFileSelector>\n"
    +"#include <QtCore/QState>\n"
    +"#include <QtGui/qpixmap.h>\n"
    +"#include <private/qquickcontext2dcommandbuffer_p.h>\n"
    +"#include <private/qquickcontext2dtexture_p.h>\n"
    +"#include <private/qquickcanvasitem_p.h>\n"
    +"#include <private/qquickanchors_p_p.h>\n"
    +"#include <private/qquickcontext2dtile_p.h>\n"
    +"#include <private/qquickanimation_p.h>\n"
    +"#include <private/qquickscalegrid_p_p.h>\n"
    +"#include <private/qquickcontext2d_p.h>\n"
    +"#include <private/qquicktransition_p.h>\n"
    +"#include <private/qquickflickable_p_p.h>\n"
    +"#include <private/qqmlchangeset_p.h>\n"
    +"#include <private/qquickpath_p.h>\n"
    +"#include <private/qquickevents_p_p.h>\n"
    +"#include <private/qquicksprite_p.h>\n"
    +"#include <QtQuick/qquicktextdocument.h>\n"
    +"#include <QtQuick/qsgsimplerectnode.h>\n"
    +"#include <private/qqmlcontext_p.h>\n"
    +"#include <private/qsgrenderer_p.h>\n"
    +"#include <private/qsgrenderloop_p.h>\n"
  ,
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
    "Q_QML_EXPORT", "",
  ]
};

function classHasInheritedVirtualMethods(item) {
  var methods = item.getMethodList();
  for(var i = 0; i < methods.size(); i++) {
    if (methods.get(i).isVirtual()) {
      return true;
    }
  }
  var bases = item.getBaseClassList();
  for(var i = 0; i < bases.size(); i++) {
    var baseClass = bases.get(i).getCppClass()
    if (baseClass && classHasInheritedVirtualMethods(baseClass) ) {
      return true;
    }
  }
  return false;
}


function shouldAllowClassWrapper(item) {
  if (!item.isClass() || ((""+item.getLiteralName()).length == 0)) {
    return false;
  }
  if (item.isTemplate()) {
    return false;
  }

  if (!classHasInheritedVirtualMethods(item)) {
    print("skip wrapper as no virtual methods: "+item.getLiteralName()+"\n");
    return false;
  }

  if (/Private$/.test(""+item.getLiteralName())) {
    return false;
  }

  switch(""+item.getLiteralName()) {
    case "QQuickWindow":
    case "QQuickView":
    case "QQmlFileSelector":
    case "QQmlComponent":
    case "QQuickContext2D":
    case "QQuickCustomParticle":
    case "QQuickItemParticle":
    case "QQuickImageParticle":
    case "QQuickCanvasContext":
    case "QQuickAnchorAnimation":
    case "QQuickParentAnimation":
    case "QQuickPathAnimation":
    case "QQuickLoaderIncubator":
    case "QQuickMouseArea":
    case "QQuickPinchArea":
    case "QQuickParticlePainter":
    case "QQuickBasePositioner":
    case "QQuickPropertyChanges":
    case "QQuickRepeater":
    case "QQuickShaderEffect":
    case "QQuickShaderEffectSource":
    case "QQuickSmoothedAnimation":
    case "QQuickSpringAnimation":
    case "QQuickColumn":
    case "QQuickFlow":
    case "QQuickGrid":
    case "QQuickRow":
    case "QQuickStateChangeScript":
    case "QQuickAnchorChanges":
    case "QQuickAnchorSet":
    case "QQuickParentChange":
    case "QQuickTimeLine":
    case "QQuickTransition":
    case "QSGRenderContext":
    case "QSGDefaultGlyphNode":
    case "QSGDistanceFieldGlyphNode":
    case "QSGOpaqueTextureMaterialShader":
    case "QSGTextureMaterialShader":
    case "QQuickFlickable":
    case "QQuickItemChangeListener":
    case "QQuickItemViewTransitionChangeListener":
    case "QContinuingAnimationGroupJob":
    case "QQuickProfiler":
      return false;
    default:
      ;
  }
  return true;
}

function processCallback(item, data)
{
  if (/::itemChange$/.test(""+item.getQualifiedName())) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case 'ItemChange':
          params.get(i).getType().setLiteralType('QQuickItem::ItemChange');
          break;
        case 'const ItemChangeData &':
          params.get(i).getType().setLiteralType('const QQuickItem::ItemChangeData &');
          break;
      }
    }
  }
  if (/::metric$/.test(""+item.getQualifiedName())) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case 'PaintDeviceMetric':
          params.get(i).getType().setLiteralType('QPaintDevice::PaintDeviceMetric');
          break;
      }
    }
  }
  if((item.getLocation().indexOf('QtQml/') !== 0) && (item.getLocation().indexOf('QtQuick') !== 0)) {
    data.skipBind = true;
    return;
  }

  var skipByLocationPart = [
    'private.h',
    '_impl.h',
    '_p_p.h',
    '/private/qqml',
    '/private/qv4',
    '/private/qquickanim',
    '/private/qsgatlastexture_p',
    '/private/qsgbatchrenderer_p',
    '/private/qquickvaluetypes_p',
    '/private/qquicksvgparser_p',
    '/private/qtestoptions_p',
    '/private/qabstractanimationjob_p',
    '/private/qparallelanimationgroupjob_p',
    '/private/qsequentialanimationgroupjob_p',
    '/private/qquickpositioners_p',
    '/private/qquickspriteengine_p',
    '/private/qquickitemviewtransition_p',
    '/private/qquickstateoperations_p',
  ];

  var skipByNamePart = [
    'HashedForm',
    'QQuickPath::AttributePoint',
    'QQuickBasePositioner::PositionedItem',
    'QSGSharedDistanceFieldGlyphCache::Owner',
    'QSGThreadedRenderLoop::Window',
  ];

  for (var i in skipByLocationPart) {
    if(item.getLocation().indexOf(skipByLocationPart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }
  for (var i in skipByNamePart) {
    if(item.getQualifiedName().indexOf(skipByNamePart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }
  if (item.isClass() && /Private$/.test(""+item.getLiteralName())) {
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
  }
  switch (""+item.getQualifiedName()) {
    case "QAbstractAnimationJob":
    case "DesignerWindowManager":
    case "QDebugMessageService":
    case "QQmlDebugService":
    case "QDeleteWatchable":
    case "QDeleteWatcher":
    case "QHashedCStringRef":
    case "QHashedString":
    case "QHashedStringRef":
    case "QStringHash":
    case "QStringHashBase":
    case "QStringHashData":
    case "QStringHashNode":
    case "QStringMultiHash":
    case "QQmlBinding":
    case "QQmlBoundSignalExpression":
    case "QQmlBoundSignalExpressionPointer":

    case "QJSEngine::handle":
    case "QML_GETTYPENAMES":
    case "Q_DECLARE_TYPEINFO":
    case "Q_QML_EXPORT":
    case "Q_QUICK_EXPORT":
    case "Q_QUICK_TEST_EXPORT":
    case "QQmlComponent::qmlAttachedProperties":
    case "QQmlEngine::urlInterceptor":
    case "QQmlEngine::setUrlInterceptor":
    case "QQmlListProperty::==":
    case "QQuickItem::mapFromItem":
    case "QQuickItem::mapToItem":
    case "QQuickWindow::closing":
    case "quick_test_main":
    case "QQuickContext2D::=":
    case "QQuickContext2D::m_mutex":
    case "QQuickAccessibleAttached":
    case "QQuickDropAreaDrag":
    case "QQuickDropEvent":
    case "QQuickLoaderIncubator":
    case "QQuickItemViewTransitionableItem":
    case "QQuickItemViewTransitioner":
    case "QQuickViewTransitionAttached":
    case "QQuickParticlesModule":
    case "QQuickMouseArea":
    case "QQuickParticleData::e":
    case "QQuickParticleData::colorOwner":
    case "QQuickParticleData::rotationOwner":
    case "QQuickParticleData::deformationOwner":
    case "QQuickParticleData::animationOwner":
    case "QQuickParticleSystem::systemSync":
    case "QQuickParticleSystem::registerParticleEmitter":
    case "QQuickParticleSystem::registerParticleGroup":
    case "QQuickParticleSystem::registerParticlePainter":
    case "QQuickParticleSystem::registerParticleAffector":
    case "QQuickParticleSystem::stateRedirect":
    case "QQuickPath::sequentialPointAt":
    case "QQuickState":
    case "QQuickStateGroup":
    case "QQuickStateChangeScript":
    case "QQuickStateAction":
    case "QQuickStateActionEvent":
    case "QQuickStateOperation":
    case "QQuickAnchorChanges":
    case "QQuickAnchorSet":
    case "QQuickParentChange":
    case "QQuickTransitionInstance":
    case "QQuickV4ParticleData":
    case "QSGDistanceFieldGlyphCache":
    case "QSGDefaultDepthStencilBuffer":
    case "QSGDefaultDistanceFieldGlyphCache":
    case "QSGSharedDistanceFieldGlyphCache":
    case "QSGContextFactoryInterface":
    case "QSGContextPlugin":
    case "QSGRenderContext":
    case "QSGNodeUpdater":
    case "ThresholdFunc":
    case "QV8Engine":
    case "QSGRenderer::nodeUpdater":
    case "QSGRenderer::setNodeUpdater":
    case "QQuickItemPrivate::changeListeners":
    case "QQuickItemPrivate::_stateGroup":
    case "QQuickItemPrivate::_states":
    case "QQuickItemPrivate::ExtraData::screenAttached":
    case "QQuickItemPrivate::ExtraData::layoutDirectionAttached":
    case "QQuickItemPrivate::ExtraData::contents":
    case "QQuickItemPrivate::ExtraData::layer":
    case "QQuickItemPrivate::ExtraData::keyHandler":
    case "QQuickItemPrivate::layer":


    // not exported (link errors)

    case "QQuickText::lineLaidOut":
    case "QQuickTransition::prepare":
    case "FxViewItem":
    case "QAbstractAnimationJob":
    case "QAnimationGroupJob":
    case "QPauseAnimationJob":
    case "QHashedString":
    case "QHashedStringRef":
    case "qHash":
    case "qHash":
    case "QQuickAbstractAnimationPrivate":
    case "QQuickAgeAffector":
    case "QQuickKeyNavigationAttached":
    case "QQuickKeyNavigationAttachedPrivate":
    case "QQuickKeysAttached":
    case "QQuickKeysAttachedPrivate":
    case "QQuickAnchorAnimation":
    case "QQuickAnchorsPrivate":
    case "QQuickAngleDirection":
    case "QQuickApplication":
    case "QQuickAttractorAffector":
    case "QQuickBorderImage":
    case "QQuickBulkValueAnimator":
    case "QQuickCanvasContext":
    case "QQuickCanvasItem":
    case "QQuickCanvasPixmap":
    case "QQuickColorValueType":
    case "QQuickColumn":
    case "QQuickContents":
    case "QQuickContext2D":
    case "QQuickContext2DCommandBuffer":
    case "QQuickContext2DFBOTexture":
    case "QQuickContext2DFBOTile":
    case "QQuickContext2DImageTexture":
    case "QQuickContext2DImageTile":
    case "QQuickContext2DRenderThread":
    case "QQuickContext2DTexture":
    case "QQuickContext2DTile":
    case "QQuickCumulativeDirection":
    case "QQuickCurve":
    case "QQuickCustomAffector":
    case "QQuickCustomParticle":
    case "QQuickDefaultTextureFactory":
    case "QQuickDirection":
    case "QQuickDoubleValidator":
    case "QQuickDrag":
    case "QQuickDragAttached":
    case "QQuickDragMimeData":
    case "QQuickDropArea":
    case "QQuickDropAreaDrag":
    case "QQuickDropEvent":
    case "QQuickEllipseExtruder":
    case "QQuickFlickablePrivate":
    case "QQuickFlickableVisibleArea":
    case "QQuickFlipable":
    case "QQuickFlow":
    case "QQuickFocusScope":
    case "QQuickFontLoader":
    case "QQuickFontValueType":
    case "QQuickFrictionAffector":
    case "QQuickGrabGestureEvent":
    case "QQuickGradient":
    case "QQuickGradientStop":
    case "QQuickGravityAffector":
    case "QQuickGrid":
    case "QQuickGridMesh":
    case "QQuickGridScaledImage":
    case "QQuickGridView":
    case "QQuickGridViewAttached":
    case "QQuickGroupGoalAffector":
    case "QQuickImage":
    case "QQuickImageParticle":
    case "QQuick_initializeProviders":
    case "QQuickIntValidator":
    case "QQuickItemKeyFilter":
    case "QQuickItemLayer":
    case "QQuickItemParticle":
    case "QQuickItemParticleAttached":
    case "QQuickItemsModule":
    case "QQuickItemView":
    case "QQuickItemViewAttached":
    case "QQuickItemViewChangeSet":
    case "QQuickItemViewTransitionableItem":
    case "QQuickItemViewTransitioner":
    case "QQuickKeyEvent":
    case "QQuickKeyNavigationAttached":
    case "QQuickKeysAttached":
    case "QQuickLayoutMirroringAttached":
    case "QQuickLineExtruder":
    case "QQuickListView":
    case "QQuickListViewAttached":
    case "QQuickLoader":
    case "QQuickMaskExtruder":
    case "QQuickMatrix4x4ValueType":
    case "QQuickMultiPointTouchArea":
    case "QQuickPackage":
    case "QQuickPackageAttached":
    case "QQuickParentAnimation":
    case "QQuickParticleAffector":
    case "QQuickParticleData":
    case "QQuickParticleDataHeap":
    case "QQuickParticleEmitter":
    case "QQuickParticleExtruder":
    case "QQuickParticleGroup":
    case "QQuickParticleGroupData":
    case "QQuickParticlePainter":
    case "QQuickParticleSystem":
    case "QQuickParticleSystemAnimation":
    case "QQuickPath":
    case "QQuickPathAnimation":
    case "QQuickPathAnimationAnimator":
    case "QQuickPathAnimationUpdater":
    case "QQuickPathArc":
    case "QQuickPathAttribute":
    case "QQuickPathCatmullRomCurve":
    case "QQuickPathCubic":
    case "QQuickPathElement":
    case "QQuickPathInterpolator":
    case "QQuickPathLine":
    case "QQuickPathPercent":
    case "QQuickPathQuad":
    case "QQuickPathSvg":
    case "QQuickPathView":
    case "QQuickPathViewAttached":
    case "QQuickPen":
    case "QQuickPinch":
    case "QQuickPinchArea":
    case "QQuickPinchEvent":
    case "QQuickPointDirection":
    case "QQuickPositionerAttached":
    case "QQuickPropertyChangesParser":
    case "QQuickQuaternionValueType":
    case "QQuickRectangle":
    case "QQuickRectangleExtruder":
    case "QQuickRepeater":
    case "QQuickRootItem":
    case "QQuickRotation":
    case "QQuickRow":
    case "QQuickScale":
    case "QQuickScaleGrid":
    case "QQuickScreen":
    case "QQuickScreenAttached":
    case "QQuickShaderEffectMaterialKey":
    case "QQuickShaderEffectMesh":
    case "QQuickShaderEffectSourceNode":
    case "QQuickSmoothedAnimation":
    case "QQuickSmoothedAnimationPrivate":
    case "QQuickSpringAnimation":
    case "QQuickSprite":
    case "QQuickSpriteGoalAffector":
    case "QQuickSpriteSequence":
    case "QQuickStateActionEvent":
    case "QQuickStyledText":
    case "QQuickSvgParser":
    case "QQuickSystemPalette":
    case "QQuickTargetDirection":
    case "QQuickTextControl":
    case "QQuickTextDocumentWithImageResources":
    case "QQuickTextEditMimeData":
    case "QQuickTextLine":
    case "QQuickTextNode":
    case "QQuickTextNodeEngine":
    case "QQuickTextUtil":
    case "QQuickTimeLine":
    case "QQuickTimeLineCallback":
    case "QQuickTimeLineObject":
    case "QQuickTimeLineValue":
    case "QQuickTouchPoint":
    case "QQuickTrailEmitter":
    case "QQuickTransform":
    case "QQuickTransitionManager":
    case "QQuickTranslate":
    case "QQuickTurbulenceAffector":
    case "QQuickUtilModule":
    case "QQuickValueTypes":
    case "QQuickVector2DValueType":
    case "QQuickVector3DValueType":
    case "QQuickVector4DValueType":
    case "QQuickViewSection":
    case "QQuickWanderAffector":
    case "QQuickWheelEvent":
    case "QQuickWorkerScript":
    case "QQuickWorkerScriptEngine":
    case "QSGAtlasTexture":
    case "QSGBatchRenderer":
    case "QSGBindableFbo":
    case "QSGBindableFboId":
    case "QSGDefaultGlyphNode":
    case "QSGDepthStencilBuffer":
    case "QSGDepthStencilBufferManager":
    case "QSGDistanceFieldGlyphNode":
    case "QSGOutlinedTextMaterial":
    case "QSGStyledTextMaterial":
    case "QSGTextMaskMaterial":
    case "QSGTextureMaterialShader":
    case "QSGThreadedRenderLoop":
    case "QSGWindowsRenderLoop":
    case "QSmoothedAnimation":
    case "QSmoothedAnimationTimer":
    case "QTest":
    case "qtPositionAttributeName":
    case "qtTexCoordAttributeName":
    case "QuickKeyNavigationAttached":
    case "QuickKeysAttached":
    case "QuickTestEvent":
    case "QuickTestResult":
    case "QV8ProfilerData":
    case "QV8ProfilerService":
    case "QQuickFlickable::visibleArea":

    case "QQuickViewPrivate":
    case "QQuickTransformPrivate":
    case "QSGTexturePrivate":
    case "QQuickPaintedItemPrivate::":
    case "QJSValueIteratorPrivate::":
    case "QQuickItemPrivate::visibleChildren_append":
    case "QQuickItemPrivate::transform_count":
    case "QQuickItemPrivate::transform_append":
    case "QQuickItemPrivate::transform_at":
    case "QQuickItemPrivate::transform_clear":
    case "QQuickItemPrivate::transforms":
    case "QQuickWindowPrivate::updateEffectiveOpacity":
    case "QQuickWindowPrivate::updateEffectiveOpacityRoot":
    case "QQuickWindowPrivate::dragGrabber":
    case "QQuickWindowPrivate::deliverDragEvent":
    case "QQuickWindowPrivate::animationController":
    case "QQuickWindowPrivate::incubationController":
    case "QQuickWindowPrivate::contentItem":
    case "QQuickItemChangeListener::anchorPrivate":
    case "QQuickMatrix4x4":
    case "QQuickRootItemMarker":
    case "QQuickWidgetPrivate":
    case "QQuickWindowPrivate::renderControl":
    case "QQuickWindowPrivate::init":
    case "QJSValueIteratorPrivate::currentProperty":
    case "QJSValueIteratorPrivate::nextProperty":
    case "QQuickProfilerData::toByteArrays":
      data.skipBind = true;
      return;
    case "QSGMaterialShader":
    case "QSGSimpleRectNode":
    case "QSGFlatColorMaterial":
    case "QSGSimpleTextureNode":
    case "QSGOpaqueTextureMaterial":
    case "QSGNode":
    case "QSGBasicGeometryNode":
    case "QSGGeometryNode":
    case "QSGClipNode":
    case "QSGOpacityNode":
    case "QSGRootNode":
    case "QSGTransformNode":
    case "QQuickContext2D":
    case "QQuickDefaultClipNode":
    case "QQuickContext2DFBOTile":
    case "QQuickContext2DCommandBuffer":
    case "QQuickContext2DTile":
    case "QQuickDropEventEx":
    case "QQuickContext2DImageTile":
    case "QQuickTextNode":
    case "QQuickColorValueType":
    case "QQuickFontValueType":
    case "QQuickMatrix4x4ValueType":
    case "QQuickQuaternionValueType":
    case "QQuickVector2DValueType":
    case "QQuickVector3DValueType":
    case "QQuickVector4DValueType":
    case "QSGImageNode":
    case "QSGGlyphNode":
    case "QSGRectangleNode":
    case "QSGDefaultRectangleNode":
    case "QSGDefaultGlyphNode":
    case "QSGDefaultImageNode":
    case "QSGDistanceFieldGlyphNode":
    case "QSGPainterNode":
    case "QSGRenderNode":
    case "QSGOpaqueTextureMaterialShader":
    case "QSGTextureMaterialShader":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;
    case "QQmlComponent::create":
      item.setTransferResultOwnership(true);
      break;
  }
  if (item.isConstructor()) {
    if (""+item.getQualifiedName() === "QQuickContext2D::") {
      var params = item.getParameterList();
      if (params.size() === 1) {
        if (""+params.get(0).getType().getLiteralType() === "const QQuickContext2D &"){
          data.skipBind = true;
        }
      }
    }
    if (""+item.getQualifiedName() === "QQuickRevertAction::") {
      var params = item.getParameterList();
      if (params.size() === 1) {
        if (""+params.get(0).getType().getLiteralType() === "QQuickStateActionEvent *"){
          data.skipBind = true;
        }
      }
    }
  }
  if (item.isMethod() || item.isConstructor() || item.isOperator()) {
    if (typeof item.getResultType !== 'undefined' && item.getResultType()) {
      switch (""+item.getResultType().getLiteralType()) {
        case 'Flags':
          item.getResultType().setLiteralType('QQmlImageProviderBase::Flags');
          break;
        case 'ImageType':
          item.getResultType().setLiteralType('QQmlImageProviderBase::ImageType');
          break;
        case 'UpdatePaintNodeData *':
          item.getResultType().setLiteralType('QQuickItem::UpdatePaintNodeData *');
          break;
        case 'SurfaceType':
          item.getResultType().setLiteralType('QSurface::SurfaceType');
          break;
      }
    }
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
    print("TYPE: "+params.get(i).getType().getLiteralType()+"\n");
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
        case 'QJSEnginePrivate &':
        case 'QQmlComponentPrivate &':
        case 'QQmlEnginePrivate &':
        case 'QQuickItemPrivate &':
        case 'QQuickPaintedItemPrivate &':
        case 'QQuickTransformPrivate &':
        case 'QQuickWindowPrivate &':
        case 'QSGBasicGeometryNodePrivate &':
        case 'QSGGeometryNodePrivate &':
        case 'QSGNodePrivate &':
        case 'QSGTexturePrivate &':
        case 'QJSValuePrivate *':
        case 'QQmlInfoPrivate *':
          data.skipBind = true;
          return;
        case 'Flags':
          params.get(i).getType().setLiteralType('QQmlImageProviderBase::Flags');
          break;
        case 'ImageType':
          params.get(i).getType().setLiteralType('QQmlImageProviderBase::ImageType');
          break;
        case 'UpdatePaintNodeData *':
          params.get(i).getType().setLiteralType('QQuickItem::UpdatePaintNodeData *');
          break;
        case 'CreateTextureOption':
          params.get(i).getType().setLiteralType('QQuickWindow::CreateTextureOption');
          break;
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "CreateTextureOption(0)":
          params.get(i).setDefaultValue('QQuickWindow::CreateTextureOption(0)');
          break;
      }
    }
  }
  if (item.isTypedef()) {
    switch (""+item.getType().getQualifiedBaseType()) {
      case "QFlags": break;
      default:
        data.skipBind = true;
        print("skipping typedef name: " + item.getLiteralName()+"\n");
        print("skipping typedef type: " + item.getType().getLiteralType()+"\n");
        print("skipping typedef basetype: " + item.getType().getQualifiedBaseType()+"\n");
        return;
    }
  }

  if ((""+item.getQualifiedName()) === "QQuickItem::updatePaintNode") {
    item.setDiscardResultOwnership(true);
  }

  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
  if (!data.skipBind) {
    print("binding: " + item.getQualifiedName() + "\n");
  }
}

