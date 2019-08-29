
#include "py_Node.h"
//cocos头文件
#include "2d/CCNode.h"

namespace py_cocos2d
{

PyObject* PyNode_holder(PyNode *self)
{
    PLOGD("================PyNode HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// virtual void cleanup()
PyObject* PyNode_cleanup(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isRunning(const)
PyObject* PyNode_isRunning(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual GLubyte getDisplayedOpacity(const)
PyObject* PyNode_getDisplayedOpacity(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void draw(Renderer *renderer, const Mat4 &transform, uint32t flags)
PyObject* PyNode_draw(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void visit(Renderer *renderer, const Mat4 &parentTransform, uint32t parentFlags)
PyObject* PyNode_visit(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Scene * getScene(const)
PyObject* PyNode_getScene(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Rect getBoundingBox(const)
PyObject* PyNode_getBoundingBox(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Rect boundingBox(const)
PyObject* PyNode_boundingBox(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setEventDispatcher(EventDispatcher *dispatcher)
PyObject* PyNode_setEventDispatcher(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual EventDispatcher * getEventDispatcher(const)
PyObject* PyNode_getEventDispatcher(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual GLubyte getOpacity(const)
PyObject* PyNode_getOpacity(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void scheduleUpdateWithPriorityLua(int handler, int priority)
PyObject* PyNode_scheduleUpdateWithPriorityLua(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setColor(const Color3B &color)
PyObject* PyNode_setColor(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setCascadeOpacityEnabled(bool cascadeOpacityEnabled)
PyObject* PyNode_setCascadeOpacityEnabled(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Color3B & getColor(const)
PyObject* PyNode_getColor(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Color3B & getDisplayedColor(const)
PyObject* PyNode_getDisplayedColor(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setOpacity(GLubyte opacity)
PyObject* PyNode_setOpacity(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateDisplayedOpacity(GLubyte parentOpacity)
PyObject* PyNode_updateDisplayedOpacity(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setOnEnterCallback(const std::function< void> &callback)
PyObject* PyNode_setOnEnterCallback(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isCascadeOpacityEnabled(const)
PyObject* PyNode_isCascadeOpacityEnabled(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateDisplayedColor(const Color3B &parentColor)
PyObject* PyNode_updateDisplayedColor(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isCascadeColorEnabled(const)
PyObject* PyNode_isCascadeColorEnabled(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::function< void> & getOnExitCallback(const)
PyObject* PyNode_getOnExitCallback(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::function< void> & getOnEnterCallback(const)
PyObject* PyNode_getOnEnterCallback(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setOnExitCallback(const std::function< void> &callback)
PyObject* PyNode_setOnExitCallback(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::function< void> & getonEnterTransitionDidFinishCallback(const)
PyObject* PyNode_getonEnterTransitionDidFinishCallback(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setonEnterTransitionDidFinishCallback(const std::function< void> &callback)
PyObject* PyNode_setonEnterTransitionDidFinishCallback(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setonExitTransitionDidStartCallback(const std::function< void> &callback)
PyObject* PyNode_setonExitTransitionDidStartCallback(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isOpacityModifyRGB(const)
PyObject* PyNode_isOpacityModifyRGB(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::function< void> & getonExitTransitionDidStartCallback(const)
PyObject* PyNode_getonExitTransitionDidStartCallback(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setOpacityModifyRGB(bool value)
PyObject* PyNode_setOpacityModifyRGB(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// unsigned short getCameraMask(const)
PyObject* PyNode_getCameraMask(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setCameraMask(unsigned short mask, bool applyChildren=true)
PyObject* PyNode_setCameraMask(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setLocalZOrder(std::int32t localZOrder)
PyObject* PyNode_setLocalZOrder(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setCascadeColorEnabled(bool cascadeColorEnabled)
PyObject* PyNode_setCascadeColorEnabled(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::int32t getLocalZOrder(const)
PyObject* PyNode_getLocalZOrder(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setGlobalZOrder(float globalZOrder)
PyObject* PyNode_setGlobalZOrder(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void updateOrderOfArrival()
PyObject* PyNode_updateOrderOfArrival(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getGlobalZOrder(const)
PyObject* PyNode_getGlobalZOrder(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getScaleX(const)
PyObject* PyNode_getScaleX(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScaleY(float scaleY)
PyObject* PyNode_setScaleY(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScaleX(float scaleX)
PyObject* PyNode_setScaleX(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScaleZ(float scaleZ)
PyObject* PyNode_setScaleZ(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getScaleZ(const)
PyObject* PyNode_getScaleZ(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getScaleY(const)
PyObject* PyNode_getScaleY(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScale_3(float scale)
PyObject* PyNode_setScale_3(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getScale_3(const)
PyObject* PyNode_getScale_3(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPositionNormalized(const Vec2 &position)
PyObject* PyNode_setPositionNormalized(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScale_4(float scaleX, float scaleY)
PyObject* PyNode_setScale_4(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPosition(const Vec2 &position)
PyObject* PyNode_setPosition(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Vec2 & getPositionNormalized(const)
PyObject* PyNode_getPositionNormalized(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Vec2 & getPosition(const)
PyObject* PyNode_getPosition(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPositionX(float x)
PyObject* PyNode_setPositionX(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPosition_2(float x, float y)
PyObject* PyNode_setPosition_2(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void getPosition_2(float *x, float *y const)
PyObject* PyNode_getPosition_2(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPositionY(float y)
PyObject* PyNode_setPositionY(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getPositionX(void const)
PyObject* PyNode_getPositionX(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPosition3D(const Vec3 &position)
PyObject* PyNode_setPosition3D(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getPositionY(void const)
PyObject* PyNode_getPositionY(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPositionZ(float positionZ)
PyObject* PyNode_setPositionZ(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Vec3 getPosition3D(const)
PyObject* PyNode_getPosition3D(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getPositionZ(const)
PyObject* PyNode_getPositionZ(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getSkewX(const)
PyObject* PyNode_getSkewX(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Vec2 & getAnchorPoint(const)
PyObject* PyNode_getAnchorPoint(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getSkewY(const)
PyObject* PyNode_getSkewY(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setAnchorPoint(const Vec2 &anchorPoint)
PyObject* PyNode_setAnchorPoint(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSkewX(float skewX)
PyObject* PyNode_setSkewX(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setVisible(bool visible)
PyObject* PyNode_setVisible(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Vec2 & getAnchorPointInPoints(const)
PyObject* PyNode_getAnchorPointInPoints(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setContentSize(const Size &contentSize)
PyObject* PyNode_setContentSize(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Size & getContentSize(const)
PyObject* PyNode_getContentSize(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSkewY(float skewY)
PyObject* PyNode_setSkewY(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotation3D(const Vec3 &rotation)
PyObject* PyNode_setRotation3D(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getRotation(const)
PyObject* PyNode_getRotation(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isVisible(const)
PyObject* PyNode_isVisible(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotationSkewX(float rotationX)
PyObject* PyNode_setRotationSkewX(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Quaternion getRotationQuat(const)
PyObject* PyNode_getRotationQuat(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotationSkewY(float rotationY)
PyObject* PyNode_setRotationSkewY(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getRotationSkewX(const)
PyObject* PyNode_getRotationSkewX(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotation(float rotation)
PyObject* PyNode_setRotation(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Vec3 getRotation3D(const)
PyObject* PyNode_getRotation3D(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setIgnoreAnchorPointForPosition(bool ignore)
PyObject* PyNode_setIgnoreAnchorPointForPosition(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// int getGLServerState(const)
PyObject* PyNode_getGLServerState(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getRotationSkewY(const)
PyObject* PyNode_getRotationSkewY(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotationQuat(const Quaternion &quat)
PyObject* PyNode_setRotationQuat(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const std::string & getName(const)
PyObject* PyNode_getName(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void * getUserData()
PyObject* PyNode_getUserData(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setName(const std::string &name)
PyObject* PyNode_setName(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual int getTag(const)
PyObject* PyNode_getTag(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setUserObject(Ref *userObject)
PyObject* PyNode_setUserObject(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setUserData(void *userData)
PyObject* PyNode_setUserData(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Ref * getUserObject()
PyObject* PyNode_getUserObject(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTag(int tag)
PyObject* PyNode_setTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setGLServerState(int)
PyObject* PyNode_setGLServerState(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// GLProgram * getGLProgram(const)
PyObject* PyNode_getGLProgram(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onEnter_2()
PyObject* PyNode_onEnter_2(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isIgnoreAnchorPointForPosition(const)
PyObject* PyNode_isIgnoreAnchorPointForPosition(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// GLProgramState * getGLProgramState(const)
PyObject* PyNode_getGLProgramState(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setGLProgram(GLProgram *glprogram)
PyObject* PyNode_setGLProgram(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onExitTransitionDidStart_2()
PyObject* PyNode_onExitTransitionDidStart_2(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual ActionManager * getActionManager()
PyObject* PyNode_getActionManager(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setGLProgramState(GLProgramState *glProgramState)
PyObject* PyNode_setGLProgramState(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onExit_2()
PyObject* PyNode_onExit_2(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onEnterTransitionDidFinish_2()
PyObject* PyNode_onEnterTransitionDidFinish_2(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void stopAction(Action *action)
PyObject* PyNode_stopAction(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Action * runAction(Action *action)
PyObject* PyNode_runAction(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void stopActionsByFlags(unsigned int flags)
PyObject* PyNode_stopActionsByFlags(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void stopActionByTag(int tag)
PyObject* PyNode_stopActionByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void stopAllActionsByTag(int tag)
PyObject* PyNode_stopAllActionsByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void stopAllActions()
PyObject* PyNode_stopAllActions(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// ssizet getNumberOfRunningActionsByTag(int tag const)
PyObject* PyNode_getNumberOfRunningActionsByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScheduler(Scheduler *scheduler)
PyObject* PyNode_setScheduler(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// ssizet numberOfRunningActions(const)
PyObject* PyNode_numberOfRunningActions(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// ssizet getNumberOfRunningActions(const)
PyObject* PyNode_getNumberOfRunningActions(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isScheduled(SELSCHEDULE selector const)
PyObject* PyNode_isScheduled(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Scheduler * getScheduler()
PyObject* PyNode_getScheduler(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setActionManager(ActionManager *actionManager)
PyObject* PyNode_setActionManager(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isScheduled_1(const std::string &key const)
PyObject* PyNode_isScheduled_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void scheduleUpdate_1(void)
PyObject* PyNode_scheduleUpdate_1(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void scheduleUpdateWithPriority_1(int priority)
PyObject* PyNode_scheduleUpdateWithPriority_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_3(SELSCHEDULE selector, float interval, unsigned int repeat, float delay)
PyObject* PyNode_schedule_3(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_4(SELSCHEDULE selector, float interval)
PyObject* PyNode_schedule_4(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void scheduleOnce(SELSCHEDULE selector, float delay)
PyObject* PyNode_scheduleOnce(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Action * getActionByTag(int tag)
PyObject* PyNode_getActionByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_8(const std::function< voidfloat> &callback, const std::string &key)
PyObject* PyNode_schedule_8(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_9(const std::function< voidfloat> &callback, float interval, const std::string &key)
PyObject* PyNode_schedule_9(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void scheduleOnce_1(const std::function< voidfloat> &callback, float delay, const std::string &key)
PyObject* PyNode_scheduleOnce_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_10(const std::function< voidfloat> &callback, float interval, unsigned int repeat, float delay, const std::string &key)
PyObject* PyNode_schedule_10(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void unschedule(SELSCHEDULE selector)
PyObject* PyNode_unschedule(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void unscheduleAllCallbacks()
PyObject* PyNode_unscheduleAllCallbacks(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void resume(void)
PyObject* PyNode_resume(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void pause(void)
PyObject* PyNode_pause(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void schedule_7(SELSCHEDULE selector)
PyObject* PyNode_schedule_7(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void unschedule_1(const std::string &key)
PyObject* PyNode_unschedule_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void update_3(float delta)
PyObject* PyNode_update_3(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Mat4 & getNodeToParentTransform(const)
PyObject* PyNode_getNodeToParentTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void resumeSchedulerAndActions()
PyObject* PyNode_resumeSchedulerAndActions(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void pauseSchedulerAndActions()
PyObject* PyNode_pauseSchedulerAndActions(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateTransform()
PyObject* PyNode_updateTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setNodeToParentTransform(const Mat4 &transform)
PyObject* PyNode_setNodeToParentTransform(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Mat4 getNodeToParentTransform_1(Node *ancestor const)
PyObject* PyNode_getNodeToParentTransform_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Mat4 & getParentToNodeTransform(const)
PyObject* PyNode_getParentToNodeTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual AffineTransform nodeToParentTransform(const)
PyObject* PyNode_nodeToParentTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual AffineTransform parentToNodeTransform(const)
PyObject* PyNode_parentToNodeTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual AffineTransform getNodeToParentAffineTransform(Node *ancestor const)
PyObject* PyNode_getNodeToParentAffineTransform(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Mat4 getNodeToWorldTransform(const)
PyObject* PyNode_getNodeToWorldTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual AffineTransform nodeToWorldTransform(const)
PyObject* PyNode_nodeToWorldTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Mat4 getWorldToNodeTransform(const)
PyObject* PyNode_getWorldToNodeTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertToNodeSpace(const Vec2 &worldPoint const)
PyObject* PyNode_convertToNodeSpace(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual AffineTransform worldToNodeTransform(const)
PyObject* PyNode_worldToNodeTransform(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertToWorldSpace(const Vec2 &nodePoint const)
PyObject* PyNode_convertToWorldSpace(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertToNodeSpaceAR(const Vec2 &worldPoint const)
PyObject* PyNode_convertToNodeSpaceAR(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool removeComponent(const std::string &name)
PyObject* PyNode_removeComponent(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertTouchToNodeSpace(Touch *touch const)
PyObject* PyNode_convertTouchToNodeSpace(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertTouchToNodeSpaceAR(Touch *touch const)
PyObject* PyNode_convertTouchToNodeSpaceAR(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setAdditionalTransform(const Mat4 *additionalTransform)
PyObject* PyNode_setAdditionalTransform(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Component * getComponent(const std::string &name)
PyObject* PyNode_getComponent(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool addComponent(Component *component)
PyObject* PyNode_addComponent(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Vec2 convertToWorldSpaceAR(const Vec2 &nodePoint const)
PyObject* PyNode_convertToWorldSpaceAR(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Node * create()
PyObject* PyNode_create(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool removeComponent_1(Component *component)
PyObject* PyNode_removeComponent_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllComponents()
PyObject* PyNode_removeAllComponents(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static const int INVALID_TAG(= 1)
PyObject* PyNode_INVALID_TAG(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Vector< Node * > & getChildren()
PyObject* PyNode_getChildren(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_2(Node *child, int localZOrder, int tag)
PyObject* PyNode_addChild_2(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Node * getChildByName(const std::string &name const)
PyObject* PyNode_getChildByName(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static int getAttachedNodeCount()
PyObject* PyNode_getAttachedNodeCount(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void sortAllChildren()
PyObject* PyNode_sortAllChildren(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const)
PyObject* PyNode_getDescription(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild(Node *child)
PyObject* PyNode_addChild(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Node * getChildByTag(int tag const)
PyObject* PyNode_getChildByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_1(Node *child, int localZOrder)
PyObject* PyNode_addChild_1(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_3(Node *child, int localZOrder, const std::string &name)
PyObject* PyNode_addChild_3(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChild(Node *child, bool cleanup=true)
PyObject* PyNode_removeChild(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual ssizet getChildrenCount(const)
PyObject* PyNode_getChildrenCount(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChildByTag(int tag, bool cleanup=true)
PyObject* PyNode_removeChildByTag(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChildByName(const std::string &name, bool cleanup=true)
PyObject* PyNode_removeChildByName(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllChildren()
PyObject* PyNode_removeAllChildren(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllChildrenWithCleanup(bool cleanup)
PyObject* PyNode_removeAllChildrenWithCleanup(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void reorderChild(Node *child, int localZOrder)
PyObject* PyNode_reorderChild(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeFromParent()
PyObject* PyNode_removeFromParent(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setParent(Node *parent)
PyObject* PyNode_setParent(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Node * getParent_1()
PyObject* PyNode_getParent_1(PyNode *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeFromParentAndCleanup(bool cleanup)
PyObject* PyNode_removeFromParentAndCleanup(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void enumerateChildren(const std::string &name, std::function< boolNode *node> callback const)
PyObject* PyNode_enumerateChildren(PyNode *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Node *dr = dynamic_cast<cocos2d::Node*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyNode_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyNode new Node");

    PyNode *self;
    self = (PyNode*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyNode failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Node::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyNode new Node %p",self->ob_body);

    return (PyObject*)self;
}

void PyNode_Dealloc(PyNode *self)
{
    PLOGD("=====PyNode Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyNode_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyNode_methods[] = {
	{"cleanup",(PyCFunction)PyNode_cleanup,METH_NOARGS,""},
	{"isRunning",(PyCFunction)PyNode_isRunning,METH_NOARGS,""},
	{"getDisplayedOpacity",(PyCFunction)PyNode_getDisplayedOpacity,METH_NOARGS,""},
	{"draw",(PyCFunction)PyNode_draw,METH_VARARGS,""},
	{"visit",(PyCFunction)PyNode_visit,METH_VARARGS,""},
	{"getScene",(PyCFunction)PyNode_getScene,METH_NOARGS,""},
	{"getBoundingBox",(PyCFunction)PyNode_getBoundingBox,METH_NOARGS,""},
	{"boundingBox",(PyCFunction)PyNode_boundingBox,METH_NOARGS,""},
	{"setEventDispatcher",(PyCFunction)PyNode_setEventDispatcher,METH_VARARGS,""},
	{"getEventDispatcher",(PyCFunction)PyNode_getEventDispatcher,METH_NOARGS,""},
	{"getOpacity",(PyCFunction)PyNode_getOpacity,METH_NOARGS,""},
	{"scheduleUpdateWithPriorityLua",(PyCFunction)PyNode_scheduleUpdateWithPriorityLua,METH_VARARGS,""},
	{"setColor",(PyCFunction)PyNode_setColor,METH_VARARGS,""},
	{"setCascadeOpacityEnabled",(PyCFunction)PyNode_setCascadeOpacityEnabled,METH_VARARGS,""},
	{"getColor",(PyCFunction)PyNode_getColor,METH_NOARGS,""},
	{"getDisplayedColor",(PyCFunction)PyNode_getDisplayedColor,METH_NOARGS,""},
	{"setOpacity",(PyCFunction)PyNode_setOpacity,METH_VARARGS,""},
	{"updateDisplayedOpacity",(PyCFunction)PyNode_updateDisplayedOpacity,METH_VARARGS,""},
	{"setOnEnterCallback",(PyCFunction)PyNode_setOnEnterCallback,METH_VARARGS,""},
	{"isCascadeOpacityEnabled",(PyCFunction)PyNode_isCascadeOpacityEnabled,METH_NOARGS,""},
	{"updateDisplayedColor",(PyCFunction)PyNode_updateDisplayedColor,METH_VARARGS,""},
	{"isCascadeColorEnabled",(PyCFunction)PyNode_isCascadeColorEnabled,METH_NOARGS,""},
	{"getOnExitCallback",(PyCFunction)PyNode_getOnExitCallback,METH_NOARGS,""},
	{"getOnEnterCallback",(PyCFunction)PyNode_getOnEnterCallback,METH_NOARGS,""},
	{"setOnExitCallback",(PyCFunction)PyNode_setOnExitCallback,METH_VARARGS,""},
	{"getonEnterTransitionDidFinishCallback",(PyCFunction)PyNode_getonEnterTransitionDidFinishCallback,METH_NOARGS,""},
	{"setonEnterTransitionDidFinishCallback",(PyCFunction)PyNode_setonEnterTransitionDidFinishCallback,METH_VARARGS,""},
	{"setonExitTransitionDidStartCallback",(PyCFunction)PyNode_setonExitTransitionDidStartCallback,METH_VARARGS,""},
	{"isOpacityModifyRGB",(PyCFunction)PyNode_isOpacityModifyRGB,METH_NOARGS,""},
	{"getonExitTransitionDidStartCallback",(PyCFunction)PyNode_getonExitTransitionDidStartCallback,METH_NOARGS,""},
	{"setOpacityModifyRGB",(PyCFunction)PyNode_setOpacityModifyRGB,METH_VARARGS,""},
	{"getCameraMask",(PyCFunction)PyNode_getCameraMask,METH_NOARGS,""},
	{"setCameraMask",(PyCFunction)PyNode_setCameraMask,METH_VARARGS,""},
	{"setLocalZOrder",(PyCFunction)PyNode_setLocalZOrder,METH_VARARGS,""},
	{"setCascadeColorEnabled",(PyCFunction)PyNode_setCascadeColorEnabled,METH_VARARGS,""},
	{"getLocalZOrder",(PyCFunction)PyNode_getLocalZOrder,METH_NOARGS,""},
	{"setGlobalZOrder",(PyCFunction)PyNode_setGlobalZOrder,METH_VARARGS,""},
	{"updateOrderOfArrival",(PyCFunction)PyNode_updateOrderOfArrival,METH_NOARGS,""},
	{"getGlobalZOrder",(PyCFunction)PyNode_getGlobalZOrder,METH_NOARGS,""},
	{"getScaleX",(PyCFunction)PyNode_getScaleX,METH_NOARGS,""},
	{"setScaleY",(PyCFunction)PyNode_setScaleY,METH_VARARGS,""},
	{"setScaleX",(PyCFunction)PyNode_setScaleX,METH_VARARGS,""},
	{"setScaleZ",(PyCFunction)PyNode_setScaleZ,METH_VARARGS,""},
	{"getScaleZ",(PyCFunction)PyNode_getScaleZ,METH_NOARGS,""},
	{"getScaleY",(PyCFunction)PyNode_getScaleY,METH_NOARGS,""},
	{"setScale_3",(PyCFunction)PyNode_setScale_3,METH_VARARGS,""},
	{"getScale_3",(PyCFunction)PyNode_getScale_3,METH_NOARGS,""},
	{"setPositionNormalized",(PyCFunction)PyNode_setPositionNormalized,METH_VARARGS,""},
	{"setScale_4",(PyCFunction)PyNode_setScale_4,METH_VARARGS,""},
	{"setPosition",(PyCFunction)PyNode_setPosition,METH_VARARGS,""},
	{"getPositionNormalized",(PyCFunction)PyNode_getPositionNormalized,METH_NOARGS,""},
	{"getPosition",(PyCFunction)PyNode_getPosition,METH_NOARGS,""},
	{"setPositionX",(PyCFunction)PyNode_setPositionX,METH_VARARGS,""},
	{"setPosition_2",(PyCFunction)PyNode_setPosition_2,METH_VARARGS,""},
	{"getPosition_2",(PyCFunction)PyNode_getPosition_2,METH_VARARGS,""},
	{"setPositionY",(PyCFunction)PyNode_setPositionY,METH_VARARGS,""},
	{"getPositionX",(PyCFunction)PyNode_getPositionX,METH_VARARGS,""},
	{"setPosition3D",(PyCFunction)PyNode_setPosition3D,METH_VARARGS,""},
	{"getPositionY",(PyCFunction)PyNode_getPositionY,METH_VARARGS,""},
	{"setPositionZ",(PyCFunction)PyNode_setPositionZ,METH_VARARGS,""},
	{"getPosition3D",(PyCFunction)PyNode_getPosition3D,METH_NOARGS,""},
	{"getPositionZ",(PyCFunction)PyNode_getPositionZ,METH_NOARGS,""},
	{"getSkewX",(PyCFunction)PyNode_getSkewX,METH_NOARGS,""},
	{"getAnchorPoint",(PyCFunction)PyNode_getAnchorPoint,METH_NOARGS,""},
	{"getSkewY",(PyCFunction)PyNode_getSkewY,METH_NOARGS,""},
	{"setAnchorPoint",(PyCFunction)PyNode_setAnchorPoint,METH_VARARGS,""},
	{"setSkewX",(PyCFunction)PyNode_setSkewX,METH_VARARGS,""},
	{"setVisible",(PyCFunction)PyNode_setVisible,METH_VARARGS,""},
	{"getAnchorPointInPoints",(PyCFunction)PyNode_getAnchorPointInPoints,METH_NOARGS,""},
	{"setContentSize",(PyCFunction)PyNode_setContentSize,METH_VARARGS,""},
	{"getContentSize",(PyCFunction)PyNode_getContentSize,METH_NOARGS,""},
	{"setSkewY",(PyCFunction)PyNode_setSkewY,METH_VARARGS,""},
	{"setRotation3D",(PyCFunction)PyNode_setRotation3D,METH_VARARGS,""},
	{"getRotation",(PyCFunction)PyNode_getRotation,METH_NOARGS,""},
	{"isVisible",(PyCFunction)PyNode_isVisible,METH_NOARGS,""},
	{"setRotationSkewX",(PyCFunction)PyNode_setRotationSkewX,METH_VARARGS,""},
	{"getRotationQuat",(PyCFunction)PyNode_getRotationQuat,METH_NOARGS,""},
	{"setRotationSkewY",(PyCFunction)PyNode_setRotationSkewY,METH_VARARGS,""},
	{"getRotationSkewX",(PyCFunction)PyNode_getRotationSkewX,METH_NOARGS,""},
	{"setRotation",(PyCFunction)PyNode_setRotation,METH_VARARGS,""},
	{"getRotation3D",(PyCFunction)PyNode_getRotation3D,METH_NOARGS,""},
	{"setIgnoreAnchorPointForPosition",(PyCFunction)PyNode_setIgnoreAnchorPointForPosition,METH_VARARGS,""},
	{"getGLServerState",(PyCFunction)PyNode_getGLServerState,METH_NOARGS,""},
	{"getRotationSkewY",(PyCFunction)PyNode_getRotationSkewY,METH_NOARGS,""},
	{"setRotationQuat",(PyCFunction)PyNode_setRotationQuat,METH_VARARGS,""},
	{"getName",(PyCFunction)PyNode_getName,METH_NOARGS,""},
	{"getUserData",(PyCFunction)PyNode_getUserData,METH_NOARGS,""},
	{"setName",(PyCFunction)PyNode_setName,METH_VARARGS,""},
	{"getTag",(PyCFunction)PyNode_getTag,METH_NOARGS,""},
	{"setUserObject",(PyCFunction)PyNode_setUserObject,METH_VARARGS,""},
	{"setUserData",(PyCFunction)PyNode_setUserData,METH_VARARGS,""},
	{"getUserObject",(PyCFunction)PyNode_getUserObject,METH_NOARGS,""},
	{"setTag",(PyCFunction)PyNode_setTag,METH_VARARGS,""},
	{"setGLServerState",(PyCFunction)PyNode_setGLServerState,METH_VARARGS,""},
	{"getGLProgram",(PyCFunction)PyNode_getGLProgram,METH_NOARGS,""},
	{"onEnter_2",(PyCFunction)PyNode_onEnter_2,METH_NOARGS,""},
	{"isIgnoreAnchorPointForPosition",(PyCFunction)PyNode_isIgnoreAnchorPointForPosition,METH_NOARGS,""},
	{"getGLProgramState",(PyCFunction)PyNode_getGLProgramState,METH_NOARGS,""},
	{"setGLProgram",(PyCFunction)PyNode_setGLProgram,METH_VARARGS,""},
	{"onExitTransitionDidStart_2",(PyCFunction)PyNode_onExitTransitionDidStart_2,METH_NOARGS,""},
	{"getActionManager",(PyCFunction)PyNode_getActionManager,METH_NOARGS,""},
	{"setGLProgramState",(PyCFunction)PyNode_setGLProgramState,METH_VARARGS,""},
	{"onExit_2",(PyCFunction)PyNode_onExit_2,METH_NOARGS,""},
	{"onEnterTransitionDidFinish_2",(PyCFunction)PyNode_onEnterTransitionDidFinish_2,METH_NOARGS,""},
	{"stopAction",(PyCFunction)PyNode_stopAction,METH_VARARGS,""},
	{"runAction",(PyCFunction)PyNode_runAction,METH_VARARGS,""},
	{"stopActionsByFlags",(PyCFunction)PyNode_stopActionsByFlags,METH_VARARGS,""},
	{"stopActionByTag",(PyCFunction)PyNode_stopActionByTag,METH_VARARGS,""},
	{"stopAllActionsByTag",(PyCFunction)PyNode_stopAllActionsByTag,METH_VARARGS,""},
	{"stopAllActions",(PyCFunction)PyNode_stopAllActions,METH_NOARGS,""},
	{"getNumberOfRunningActionsByTag",(PyCFunction)PyNode_getNumberOfRunningActionsByTag,METH_VARARGS,""},
	{"setScheduler",(PyCFunction)PyNode_setScheduler,METH_VARARGS,""},
	{"numberOfRunningActions",(PyCFunction)PyNode_numberOfRunningActions,METH_NOARGS,""},
	{"getNumberOfRunningActions",(PyCFunction)PyNode_getNumberOfRunningActions,METH_NOARGS,""},
	{"isScheduled",(PyCFunction)PyNode_isScheduled,METH_VARARGS,""},
	{"getScheduler",(PyCFunction)PyNode_getScheduler,METH_NOARGS,""},
	{"setActionManager",(PyCFunction)PyNode_setActionManager,METH_VARARGS,""},
	{"isScheduled_1",(PyCFunction)PyNode_isScheduled_1,METH_VARARGS,""},
	{"scheduleUpdate_1",(PyCFunction)PyNode_scheduleUpdate_1,METH_NOARGS,""},
	{"scheduleUpdateWithPriority_1",(PyCFunction)PyNode_scheduleUpdateWithPriority_1,METH_VARARGS,""},
	{"schedule_3",(PyCFunction)PyNode_schedule_3,METH_VARARGS,""},
	{"schedule_4",(PyCFunction)PyNode_schedule_4,METH_VARARGS,""},
	{"scheduleOnce",(PyCFunction)PyNode_scheduleOnce,METH_VARARGS,""},
	{"getActionByTag",(PyCFunction)PyNode_getActionByTag,METH_VARARGS,""},
	{"schedule_8",(PyCFunction)PyNode_schedule_8,METH_VARARGS,""},
	{"schedule_9",(PyCFunction)PyNode_schedule_9,METH_VARARGS,""},
	{"scheduleOnce_1",(PyCFunction)PyNode_scheduleOnce_1,METH_VARARGS,""},
	{"schedule_10",(PyCFunction)PyNode_schedule_10,METH_VARARGS,""},
	{"unschedule",(PyCFunction)PyNode_unschedule,METH_VARARGS,""},
	{"unscheduleAllCallbacks",(PyCFunction)PyNode_unscheduleAllCallbacks,METH_NOARGS,""},
	{"resume",(PyCFunction)PyNode_resume,METH_NOARGS,""},
	{"pause",(PyCFunction)PyNode_pause,METH_NOARGS,""},
	{"schedule_7",(PyCFunction)PyNode_schedule_7,METH_VARARGS,""},
	{"unschedule_1",(PyCFunction)PyNode_unschedule_1,METH_VARARGS,""},
	{"update_3",(PyCFunction)PyNode_update_3,METH_VARARGS,""},
	{"getNodeToParentTransform",(PyCFunction)PyNode_getNodeToParentTransform,METH_NOARGS,""},
	{"resumeSchedulerAndActions",(PyCFunction)PyNode_resumeSchedulerAndActions,METH_NOARGS,""},
	{"pauseSchedulerAndActions",(PyCFunction)PyNode_pauseSchedulerAndActions,METH_NOARGS,""},
	{"updateTransform",(PyCFunction)PyNode_updateTransform,METH_NOARGS,""},
	{"setNodeToParentTransform",(PyCFunction)PyNode_setNodeToParentTransform,METH_VARARGS,""},
	{"getNodeToParentTransform_1",(PyCFunction)PyNode_getNodeToParentTransform_1,METH_VARARGS,""},
	{"getParentToNodeTransform",(PyCFunction)PyNode_getParentToNodeTransform,METH_NOARGS,""},
	{"nodeToParentTransform",(PyCFunction)PyNode_nodeToParentTransform,METH_NOARGS,""},
	{"parentToNodeTransform",(PyCFunction)PyNode_parentToNodeTransform,METH_NOARGS,""},
	{"getNodeToParentAffineTransform",(PyCFunction)PyNode_getNodeToParentAffineTransform,METH_VARARGS,""},
	{"getNodeToWorldTransform",(PyCFunction)PyNode_getNodeToWorldTransform,METH_NOARGS,""},
	{"nodeToWorldTransform",(PyCFunction)PyNode_nodeToWorldTransform,METH_NOARGS,""},
	{"getWorldToNodeTransform",(PyCFunction)PyNode_getWorldToNodeTransform,METH_NOARGS,""},
	{"convertToNodeSpace",(PyCFunction)PyNode_convertToNodeSpace,METH_VARARGS,""},
	{"worldToNodeTransform",(PyCFunction)PyNode_worldToNodeTransform,METH_NOARGS,""},
	{"convertToWorldSpace",(PyCFunction)PyNode_convertToWorldSpace,METH_VARARGS,""},
	{"convertToNodeSpaceAR",(PyCFunction)PyNode_convertToNodeSpaceAR,METH_VARARGS,""},
	{"removeComponent",(PyCFunction)PyNode_removeComponent,METH_VARARGS,""},
	{"convertTouchToNodeSpace",(PyCFunction)PyNode_convertTouchToNodeSpace,METH_VARARGS,""},
	{"convertTouchToNodeSpaceAR",(PyCFunction)PyNode_convertTouchToNodeSpaceAR,METH_VARARGS,""},
	{"setAdditionalTransform",(PyCFunction)PyNode_setAdditionalTransform,METH_VARARGS,""},
	{"getComponent",(PyCFunction)PyNode_getComponent,METH_VARARGS,""},
	{"addComponent",(PyCFunction)PyNode_addComponent,METH_VARARGS,""},
	{"convertToWorldSpaceAR",(PyCFunction)PyNode_convertToWorldSpaceAR,METH_VARARGS,""},
	{"create",(PyCFunction)PyNode_create,METH_NOARGS,""},
	{"removeComponent_1",(PyCFunction)PyNode_removeComponent_1,METH_VARARGS,""},
	{"removeAllComponents",(PyCFunction)PyNode_removeAllComponents,METH_NOARGS,""},
	{"INVALID_TAG",(PyCFunction)PyNode_INVALID_TAG,METH_VARARGS,""},
	{"getChildren",(PyCFunction)PyNode_getChildren,METH_NOARGS,""},
	{"addChild_2",(PyCFunction)PyNode_addChild_2,METH_VARARGS,""},
	{"getChildByName",(PyCFunction)PyNode_getChildByName,METH_VARARGS,""},
	{"getAttachedNodeCount",(PyCFunction)PyNode_getAttachedNodeCount,METH_NOARGS,""},
	{"sortAllChildren",(PyCFunction)PyNode_sortAllChildren,METH_NOARGS,""},
	{"getDescription",(PyCFunction)PyNode_getDescription,METH_NOARGS,""},
	{"addChild",(PyCFunction)PyNode_addChild,METH_VARARGS,""},
	{"getChildByTag",(PyCFunction)PyNode_getChildByTag,METH_VARARGS,""},
	{"addChild_1",(PyCFunction)PyNode_addChild_1,METH_VARARGS,""},
	{"addChild_3",(PyCFunction)PyNode_addChild_3,METH_VARARGS,""},
	{"removeChild",(PyCFunction)PyNode_removeChild,METH_VARARGS,""},
	{"getChildrenCount",(PyCFunction)PyNode_getChildrenCount,METH_NOARGS,""},
	{"removeChildByTag",(PyCFunction)PyNode_removeChildByTag,METH_VARARGS,""},
	{"removeChildByName",(PyCFunction)PyNode_removeChildByName,METH_VARARGS,""},
	{"removeAllChildren",(PyCFunction)PyNode_removeAllChildren,METH_NOARGS,""},
	{"removeAllChildrenWithCleanup",(PyCFunction)PyNode_removeAllChildrenWithCleanup,METH_VARARGS,""},
	{"reorderChild",(PyCFunction)PyNode_reorderChild,METH_VARARGS,""},
	{"removeFromParent",(PyCFunction)PyNode_removeFromParent,METH_NOARGS,""},
	{"setParent",(PyCFunction)PyNode_setParent,METH_VARARGS,""},
	{"getParent_1",(PyCFunction)PyNode_getParent_1,METH_NOARGS,""},
	{"removeFromParentAndCleanup",(PyCFunction)PyNode_removeFromParentAndCleanup,METH_VARARGS,""},
	{"enumerateChildren",(PyCFunction)PyNode_enumerateChildren,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyNodeType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CNode",                       /* tp_name */\
    sizeof(PyNode),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyNode_Dealloc),        /* destructor tp_dealloc;*/\
    0,                                  /* printfunc tp_print;*/\
    0,                                  /* getattrfunc tp_getattr;*/\
    0,                                  /* setattrfunc tp_setattr; */\
    0,                                  /* tp_as_async;formerly known as tp_compare (Python 2) or tp_reserved (Python 3) */\
    0,                                  /* reprfunc tp_repr; */\

    /* Method suites for standard classes */

    0,                                  /* PyNumberMethods *tp_as_number; */\
    0,                                  /* PySequenceMethods *tp_as_sequence; */\
    0,                                  /* PyMappingMethods *tp_as_mapping; */\

    /* More standard operations (here for binary compatibility) */

    0,                                  /* hashfunc tp_hash; */\
    0,                                  /* ternaryfunc tp_call; */\
    0,                                  /* reprfunc tp_str; */\
    0,                                  /* getattrofunc tp_getattro; */\
    0,                                  /* setattrofunc tp_setattro; */\

    /* Functions to access object as input/output buffer */
    0,                                  /* PyBufferProcs *tp_as_buffer; */\

    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,       /* long tp_flags; */\

    0,                                  /* const char *tp_doc;  Documentation string  */\

    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    0,                                  /* traverseproc tp_traverse; */\

    /* delete references to contained objects */
    0,                                  /* tp_clear; */\

    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    0,                                  /* richcmpfunc tp_richcompare; */\

    /* weak reference enabler */
    0,                                  /* Py_ssize_t tp_weaklistoffset; */\

    /* Added in release 2.2 */
    /* Iterators */
    0,                                  /* getiterfunc tp_iter; */\
    0,                                  /* iternextfunc tp_iternext; */\

    /* Attribute descriptor and subclassing stuff */
    PyNode_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyNode_New,                     /* newfunc tp_new; */
};

}
