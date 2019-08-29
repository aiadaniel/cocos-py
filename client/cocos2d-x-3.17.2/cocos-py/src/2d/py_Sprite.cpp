
#include "py_Sprite.h"
//cocos头文件
#include "2d/CCSprite.h"

namespace py_cocos2d
{

PyObject* PySprite_holder(PySprite *self)
{
    PLOGD("================PySprite HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// virtual void setDisplayFrame(SpriteFrame *newFrame)
PyObject* PySprite_setDisplayFrame(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setPolygonInfo(const PolygonInfo &info)
PyObject* PySprite_setPolygonInfo(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isFrameDisplayed(SpriteFrame *frame const)
PyObject* PySprite_isFrameDisplayed(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual SpriteFrame * getSpriteFrame(const)
PyObject* PySprite_getSpriteFrame(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual SpriteFrame * getDisplayFrame(const)
PyObject* PySprite_getDisplayFrame(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual SpriteFrame * displayFrame(const)
PyObject* PySprite_displayFrame(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isFlipY()
PyObject* PySprite_isFlipY(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setFlipY(bool flippedY)
PyObject* PySprite_setFlipY(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const PolygonInfo & getPolygonInfo(const)
PyObject* PySprite_getPolygonInfo(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Texture2D * getTexture(const override)
PyObject* PySprite_getTexture(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setStretchEnabled(bool enabled)
PyObject* PySprite_setStretchEnabled(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setStrechEnabled(bool enabled)
PyObject* PySprite_setStrechEnabled(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isStretchEnabled(const)
PyObject* PySprite_isStretchEnabled(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSpriteFrame(const std::string &spriteFrameName)
PyObject* PySprite_setSpriteFrame(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isStrechEnabled(const)
PyObject* PySprite_isStrechEnabled(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTextureRect(const Rect &rect)
PyObject* PySprite_setTextureRect(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const override)
PyObject* PySprite_getDescription(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateTransform(override)
PyObject* PySprite_updateTransform(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual SpriteBatchNode * getBatchNode(const)
PyObject* PySprite_getBatchNode(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setBatchNode(SpriteBatchNode *spriteBatchNode)
PyObject* PySprite_setBatchNode(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTexture(const std::string &filename)
PyObject* PySprite_setTexture(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTexture_1(Texture2D *texture override)
PyObject* PySprite_setTexture_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTextureRect_1(const Rect &rect, bool rotated, const Size &untrimmedSize)
PyObject* PySprite_setTextureRect_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Rect getCenterRectNormalized(const)
PyObject* PySprite_getCenterRectNormalized(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isFlippedX(const)
PyObject* PySprite_isFlippedX(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setDisplayFrameWithAnimationName(const std::string &animationName, ssizet frameIndex)
PyObject* PySprite_setDisplayFrameWithAnimationName(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isDirty(const)
PyObject* PySprite_isDirty(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setDirty(bool dirty)
PyObject* PySprite_setDirty(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// V3F_C4B_T2F_Quad getQuad(const)
PyObject* PySprite_getQuad(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isTextureRectRotated(const)
PyObject* PySprite_isTextureRectRotated(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// ssizet getAtlasIndex(const)
PyObject* PySprite_getAtlasIndex(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setAtlasIndex(ssizet atlasIndex)
PyObject* PySprite_setAtlasIndex(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const Rect & getTextureRect(const)
PyObject* PySprite_getTextureRect(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// TextureAtlas * getTextureAtlas(const)
PyObject* PySprite_getTextureAtlas(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setTextureAtlas(TextureAtlas *textureAtlas)
PyObject* PySprite_setTextureAtlas(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const Vec2 & getOffsetPosition(const)
PyObject* PySprite_getOffsetPosition(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSkewX(float sx override)
PyObject* PySprite_setSkewX(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScale_3(float scale override)
PyObject* PySprite_setScale_3(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSkewY(float sy override)
PyObject* PySprite_setSkewY(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setCenterRectNormalized(const Rect &rect)
PyObject* PySprite_setCenterRectNormalized(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChild(Node *child, bool cleanup override)
PyObject* PySprite_removeChild(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setVertexRect(const Rect &rect)
PyObject* PySprite_setVertexRect(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllChildrenWithCleanup(bool cleanup override)
PyObject* PySprite_removeAllChildrenWithCleanup(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setFlippedX(bool flippedX)
PyObject* PySprite_setFlippedX(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isFlipX()
PyObject* PySprite_isFlipX(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setFlipX(bool flippedX)
PyObject* PySprite_setFlipX(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Rect getCenterRect_1(const)
PyObject* PySprite_getCenterRect_1(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void reorderChild(Node *child, int zOrder override)
PyObject* PySprite_reorderChild(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithTexture(Texture2D *texture)
PyObject* PySprite_initWithTexture(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPositionZ(float positionZ override)
PyObject* PySprite_setPositionZ(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isFlippedY(const)
PyObject* PySprite_isFlippedY(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setFlippedY(bool flippedY)
PyObject* PySprite_setFlippedY(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setBlendFunc(const BlendFunc &blendFunc override)
PyObject* PySprite_setBlendFunc(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild(Node *child, int zOrder, int tag override)
PyObject* PySprite_addChild(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setAnchorPoint(const Vec2 &anchor override)
PyObject* PySprite_setAnchorPoint(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setContentSize(const Size &size override)
PyObject* PySprite_setContentSize(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setIgnoreAnchorPointForPosition(bool value override)
PyObject* PySprite_setIgnoreAnchorPointForPosition(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setVisible(bool bVisible override)
PyObject* PySprite_setVisible(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_1(Node *child, int zOrder, const std::string &name override)
PyObject* PySprite_addChild_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void sortAllChildren(override)
PyObject* PySprite_sortAllChildren(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPosition_2(float x, float y override)
PyObject* PySprite_setPosition_2(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScaleY(float scaleY override)
PyObject* PySprite_setScaleY(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScaleX(float scaleX override)
PyObject* PySprite_setScaleX(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotationSkewY(float rotationY override)
PyObject* PySprite_setRotationSkewY(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotationSkewX(float rotationX override)
PyObject* PySprite_setRotationSkewX(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setRotation(float rotation override)
PyObject* PySprite_setRotation(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setPosition_1(const Vec2 &pos override)
PyObject* PySprite_setPosition_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithSpriteFrameName(const std::string &spriteFrameName)
PyObject* PySprite_initWithSpriteFrameName(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithTexture_1(Texture2D *texture, const Rect &rect)
PyObject* PySprite_initWithTexture_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithPolygon(const PolygonInfo &info)
PyObject* PySprite_initWithPolygon(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithSpriteFrame(SpriteFrame *spriteFrame)
PyObject* PySprite_initWithSpriteFrame(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void draw(Renderer *renderer, const Mat4 &transform, uint32t flags override)
PyObject* PySprite_draw(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithFile_1(const std::string &filename, const Rect &rect)
PyObject* PySprite_initWithFile_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setOpacityModifyRGB(bool modify override)
PyObject* PySprite_setOpacityModifyRGB(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithTexture_2(Texture2D *texture, const Rect &rect, bool rotated)
PyObject* PySprite_initWithTexture_2(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * create()
PyObject* PySprite_create(PySprite *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setScale_2(float scaleX, float scaleY override)
PyObject* PySprite_setScale_2(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static const int INDEX_NOT_INITIALIZED(= 1)
PyObject* PySprite_INDEX_NOT_INITIALIZED(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isOpacityModifyRGB(const override)
PyObject* PySprite_isOpacityModifyRGB(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool initWithFile(const std::string &filename)
PyObject* PySprite_initWithFile(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * create_1(const std::string &filename)
PyObject* PySprite_create_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * create_2(const PolygonInfo &info)
PyObject* PySprite_create_2(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * createWithTexture(Texture2D *texture)
PyObject* PySprite_createWithTexture(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * createWithSpriteFrameName(const std::string &spriteFrameName)
PyObject* PySprite_createWithSpriteFrameName(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * create_3(const std::string &filename, const Rect &rect)
PyObject* PySprite_create_3(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * createWithTexture_1(Texture2D *texture, const Rect &rect, bool rotated=false)
PyObject* PySprite_createWithTexture_1(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Sprite * createWithSpriteFrame(SpriteFrame *spriteFrame)
PyObject* PySprite_createWithSpriteFrame(PySprite *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Sprite *dr = dynamic_cast<cocos2d::Sprite*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PySprite_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PySprite new Sprite");

    PySprite *self;
    self = (PySprite*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PySprite failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Sprite::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PySprite new Sprite %p",self->ob_body);

    return (PyObject*)self;
}

void PySprite_Dealloc(PySprite *self)
{
    PLOGD("=====PySprite Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PySprite_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PySprite_methods[] = {
	{"setDisplayFrame",(PyCFunction)PySprite_setDisplayFrame,METH_VARARGS,""},
	{"setPolygonInfo",(PyCFunction)PySprite_setPolygonInfo,METH_VARARGS,""},
	{"isFrameDisplayed",(PyCFunction)PySprite_isFrameDisplayed,METH_VARARGS,""},
	{"getSpriteFrame",(PyCFunction)PySprite_getSpriteFrame,METH_NOARGS,""},
	{"getDisplayFrame",(PyCFunction)PySprite_getDisplayFrame,METH_NOARGS,""},
	{"displayFrame",(PyCFunction)PySprite_displayFrame,METH_NOARGS,""},
	{"isFlipY",(PyCFunction)PySprite_isFlipY,METH_NOARGS,""},
	{"setFlipY",(PyCFunction)PySprite_setFlipY,METH_VARARGS,""},
	{"getPolygonInfo",(PyCFunction)PySprite_getPolygonInfo,METH_NOARGS,""},
	{"getTexture",(PyCFunction)PySprite_getTexture,METH_VARARGS,""},
	{"setStretchEnabled",(PyCFunction)PySprite_setStretchEnabled,METH_VARARGS,""},
	{"setStrechEnabled",(PyCFunction)PySprite_setStrechEnabled,METH_VARARGS,""},
	{"isStretchEnabled",(PyCFunction)PySprite_isStretchEnabled,METH_NOARGS,""},
	{"setSpriteFrame",(PyCFunction)PySprite_setSpriteFrame,METH_VARARGS,""},
	{"isStrechEnabled",(PyCFunction)PySprite_isStrechEnabled,METH_NOARGS,""},
	{"setTextureRect",(PyCFunction)PySprite_setTextureRect,METH_VARARGS,""},
	{"getDescription",(PyCFunction)PySprite_getDescription,METH_VARARGS,""},
	{"updateTransform",(PyCFunction)PySprite_updateTransform,METH_VARARGS,""},
	{"getBatchNode",(PyCFunction)PySprite_getBatchNode,METH_NOARGS,""},
	{"setBatchNode",(PyCFunction)PySprite_setBatchNode,METH_VARARGS,""},
	{"setTexture",(PyCFunction)PySprite_setTexture,METH_VARARGS,""},
	{"setTexture_1",(PyCFunction)PySprite_setTexture_1,METH_VARARGS,""},
	{"setTextureRect_1",(PyCFunction)PySprite_setTextureRect_1,METH_VARARGS,""},
	{"getCenterRectNormalized",(PyCFunction)PySprite_getCenterRectNormalized,METH_NOARGS,""},
	{"isFlippedX",(PyCFunction)PySprite_isFlippedX,METH_NOARGS,""},
	{"setDisplayFrameWithAnimationName",(PyCFunction)PySprite_setDisplayFrameWithAnimationName,METH_VARARGS,""},
	{"isDirty",(PyCFunction)PySprite_isDirty,METH_NOARGS,""},
	{"setDirty",(PyCFunction)PySprite_setDirty,METH_VARARGS,""},
	{"getQuad",(PyCFunction)PySprite_getQuad,METH_NOARGS,""},
	{"isTextureRectRotated",(PyCFunction)PySprite_isTextureRectRotated,METH_NOARGS,""},
	{"getAtlasIndex",(PyCFunction)PySprite_getAtlasIndex,METH_NOARGS,""},
	{"setAtlasIndex",(PyCFunction)PySprite_setAtlasIndex,METH_VARARGS,""},
	{"getTextureRect",(PyCFunction)PySprite_getTextureRect,METH_NOARGS,""},
	{"getTextureAtlas",(PyCFunction)PySprite_getTextureAtlas,METH_NOARGS,""},
	{"setTextureAtlas",(PyCFunction)PySprite_setTextureAtlas,METH_VARARGS,""},
	{"getOffsetPosition",(PyCFunction)PySprite_getOffsetPosition,METH_NOARGS,""},
	{"setSkewX",(PyCFunction)PySprite_setSkewX,METH_VARARGS,""},
	{"setScale_3",(PyCFunction)PySprite_setScale_3,METH_VARARGS,""},
	{"setSkewY",(PyCFunction)PySprite_setSkewY,METH_VARARGS,""},
	{"setCenterRectNormalized",(PyCFunction)PySprite_setCenterRectNormalized,METH_VARARGS,""},
	{"removeChild",(PyCFunction)PySprite_removeChild,METH_VARARGS,""},
	{"setVertexRect",(PyCFunction)PySprite_setVertexRect,METH_VARARGS,""},
	{"removeAllChildrenWithCleanup",(PyCFunction)PySprite_removeAllChildrenWithCleanup,METH_VARARGS,""},
	{"setFlippedX",(PyCFunction)PySprite_setFlippedX,METH_VARARGS,""},
	{"isFlipX",(PyCFunction)PySprite_isFlipX,METH_NOARGS,""},
	{"setFlipX",(PyCFunction)PySprite_setFlipX,METH_VARARGS,""},
	{"getCenterRect_1",(PyCFunction)PySprite_getCenterRect_1,METH_NOARGS,""},
	{"reorderChild",(PyCFunction)PySprite_reorderChild,METH_VARARGS,""},
	{"initWithTexture",(PyCFunction)PySprite_initWithTexture,METH_VARARGS,""},
	{"setPositionZ",(PyCFunction)PySprite_setPositionZ,METH_VARARGS,""},
	{"isFlippedY",(PyCFunction)PySprite_isFlippedY,METH_NOARGS,""},
	{"setFlippedY",(PyCFunction)PySprite_setFlippedY,METH_VARARGS,""},
	{"setBlendFunc",(PyCFunction)PySprite_setBlendFunc,METH_VARARGS,""},
	{"addChild",(PyCFunction)PySprite_addChild,METH_VARARGS,""},
	{"setAnchorPoint",(PyCFunction)PySprite_setAnchorPoint,METH_VARARGS,""},
	{"setContentSize",(PyCFunction)PySprite_setContentSize,METH_VARARGS,""},
	{"setIgnoreAnchorPointForPosition",(PyCFunction)PySprite_setIgnoreAnchorPointForPosition,METH_VARARGS,""},
	{"setVisible",(PyCFunction)PySprite_setVisible,METH_VARARGS,""},
	{"addChild_1",(PyCFunction)PySprite_addChild_1,METH_VARARGS,""},
	{"sortAllChildren",(PyCFunction)PySprite_sortAllChildren,METH_VARARGS,""},
	{"setPosition_2",(PyCFunction)PySprite_setPosition_2,METH_VARARGS,""},
	{"setScaleY",(PyCFunction)PySprite_setScaleY,METH_VARARGS,""},
	{"setScaleX",(PyCFunction)PySprite_setScaleX,METH_VARARGS,""},
	{"setRotationSkewY",(PyCFunction)PySprite_setRotationSkewY,METH_VARARGS,""},
	{"setRotationSkewX",(PyCFunction)PySprite_setRotationSkewX,METH_VARARGS,""},
	{"setRotation",(PyCFunction)PySprite_setRotation,METH_VARARGS,""},
	{"setPosition_1",(PyCFunction)PySprite_setPosition_1,METH_VARARGS,""},
	{"initWithSpriteFrameName",(PyCFunction)PySprite_initWithSpriteFrameName,METH_VARARGS,""},
	{"initWithTexture_1",(PyCFunction)PySprite_initWithTexture_1,METH_VARARGS,""},
	{"initWithPolygon",(PyCFunction)PySprite_initWithPolygon,METH_VARARGS,""},
	{"initWithSpriteFrame",(PyCFunction)PySprite_initWithSpriteFrame,METH_VARARGS,""},
	{"draw",(PyCFunction)PySprite_draw,METH_VARARGS,""},
	{"initWithFile_1",(PyCFunction)PySprite_initWithFile_1,METH_VARARGS,""},
	{"setOpacityModifyRGB",(PyCFunction)PySprite_setOpacityModifyRGB,METH_VARARGS,""},
	{"initWithTexture_2",(PyCFunction)PySprite_initWithTexture_2,METH_VARARGS,""},
	{"create",(PyCFunction)PySprite_create,METH_NOARGS,""},
	{"setScale_2",(PyCFunction)PySprite_setScale_2,METH_VARARGS,""},
	{"INDEX_NOT_INITIALIZED",(PyCFunction)PySprite_INDEX_NOT_INITIALIZED,METH_VARARGS,""},
	{"isOpacityModifyRGB",(PyCFunction)PySprite_isOpacityModifyRGB,METH_VARARGS,""},
	{"initWithFile",(PyCFunction)PySprite_initWithFile,METH_VARARGS,""},
	{"create_1",(PyCFunction)PySprite_create_1,METH_VARARGS,""},
	{"create_2",(PyCFunction)PySprite_create_2,METH_VARARGS,""},
	{"createWithTexture",(PyCFunction)PySprite_createWithTexture,METH_VARARGS,""},
	{"createWithSpriteFrameName",(PyCFunction)PySprite_createWithSpriteFrameName,METH_VARARGS,""},
	{"create_3",(PyCFunction)PySprite_create_3,METH_VARARGS,""},
	{"createWithTexture_1",(PyCFunction)PySprite_createWithTexture_1,METH_VARARGS,""},
	{"createWithSpriteFrame",(PyCFunction)PySprite_createWithSpriteFrame,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PySpriteType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CSprite",                       /* tp_name */\
    sizeof(PySprite),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PySprite_Dealloc),        /* destructor tp_dealloc;*/\
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
    PySprite_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PySprite_New,                     /* newfunc tp_new; */
};

}
