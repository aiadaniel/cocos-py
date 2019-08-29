
#include "py_Label.h"
//cocos头文件
#include "2d/CCLabel.h"

namespace py_cocos2d
{

PyObject* PyLabel_holder(PyLabel *self)
{
    PLOGD("================PyLabel HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// virtual void setString(const std::string &text override)
PyObject* PyLabel_setString(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// int getStringNumLines()
PyObject* PyLabel_getStringNumLines(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const std::string & getString(const override)
PyObject* PyLabel_getString(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setTextColor(const Color4B &color)
PyObject* PyLabel_setTextColor(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// int getStringLength()
PyObject* PyLabel_getStringLength(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const Color4B & getTextColor(const)
PyObject* PyLabel_getTextColor(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void enableShadow(const Color4B &shadowColor=Color4B::BLACK, const Size &offset=Size2,2, int blurRadius=0)
PyObject* PyLabel_enableShadow(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void enableOutline(const Color4B &outlineColor, int outlineSize=1)
PyObject* PyLabel_enableOutline(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void enableGlow(const Color4B &glowColor)
PyObject* PyLabel_enableGlow(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void enableBold()
PyObject* PyLabel_enableBold(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void enableUnderline()
PyObject* PyLabel_enableUnderline(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void enableItalics()
PyObject* PyLabel_enableItalics(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void disableEffect()
PyObject* PyLabel_disableEffect(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void disableEffect_1(LabelEffect effect)
PyObject* PyLabel_disableEffect_1(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isShadowEnabled(const)
PyObject* PyLabel_isShadowEnabled(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Size getShadowOffset(const)
PyObject* PyLabel_getShadowOffset(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getShadowBlurRadius(const)
PyObject* PyLabel_getShadowBlurRadius(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void enableStrikethrough()
PyObject* PyLabel_enableStrikethrough(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getOutlineSize(const)
PyObject* PyLabel_getOutlineSize(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Color4F getShadowColor(const)
PyObject* PyLabel_getShadowColor(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// LabelEffect getLabelEffectType(const)
PyObject* PyLabel_getLabelEffectType(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Color4F getEffectColor(const)
PyObject* PyLabel_getEffectColor(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setAlignment(TextHAlignment hAlignment)
PyObject* PyLabel_setAlignment(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setAlignment_1(TextHAlignment hAlignment, TextVAlignment vAlignment)
PyObject* PyLabel_setAlignment_1(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setHorizontalAlignment(TextHAlignment hAlignment)
PyObject* PyLabel_setHorizontalAlignment(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// TextHAlignment getHorizontalAlignment(const)
PyObject* PyLabel_getHorizontalAlignment(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// TextHAlignment getTextAlignment(const)
PyObject* PyLabel_getTextAlignment(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// TextVAlignment getVerticalAlignment(const)
PyObject* PyLabel_getVerticalAlignment(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setLineBreakWithoutSpace(bool breakWithoutSpace)
PyObject* PyLabel_setLineBreakWithoutSpace(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setVerticalAlignment(TextVAlignment vAlignment)
PyObject* PyLabel_setVerticalAlignment(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setBMFontSize(float fontSize)
PyObject* PyLabel_setBMFontSize(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void enableWrap(bool enable)
PyObject* PyLabel_enableWrap(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getBMFontSize(const)
PyObject* PyLabel_getBMFontSize(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setOverflow(Overflow overflow)
PyObject* PyLabel_setOverflow(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setMaxLineWidth(float maxLineWidth)
PyObject* PyLabel_setMaxLineWidth(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setWidth(float width)
PyObject* PyLabel_setWidth(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isWrapEnabled(const)
PyObject* PyLabel_isWrapEnabled(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setHeight(float height)
PyObject* PyLabel_setHeight(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setDimensions(float width, float height)
PyObject* PyLabel_setDimensions(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Overflow getOverflow(const)
PyObject* PyLabel_getOverflow(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setClipMarginEnabled(bool clipEnabled)
PyObject* PyLabel_setClipMarginEnabled(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Sprite * getLetter(int lettetIndex)
PyObject* PyLabel_getLetter(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setLineHeight(float height)
PyObject* PyLabel_setLineHeight(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getLineHeight(const)
PyObject* PyLabel_getLineHeight(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setAdditionalKerning(float space)
PyObject* PyLabel_setAdditionalKerning(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateContent()
PyObject* PyLabel_updateContent(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getAdditionalKerning(const)
PyObject* PyLabel_getAdditionalKerning(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isOpacityModifyRGB(const override)
PyObject* PyLabel_isOpacityModifyRGB(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setOpacityModifyRGB(bool isOpacityModifyRGB override)
PyObject* PyLabel_setOpacityModifyRGB(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateDisplayedColor(const Color3B &parentColor override)
PyObject* PyLabel_updateDisplayedColor(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void updateDisplayedOpacity(GLubyte parentOpacity override)
PyObject* PyLabel_updateDisplayedOpacity(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const override)
PyObject* PyLabel_getDescription(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const Size & getContentSize(const override)
PyObject* PyLabel_getContentSize(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Rect getBoundingBox(const override)
PyObject* PyLabel_getBoundingBox(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void draw(Renderer *renderer, const Mat4 &transform, uint32t flags override)
PyObject* PyLabel_draw(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setCameraMask(unsigned short mask, bool applyChildren=true override)
PyObject* PyLabel_setCameraMask(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllChildrenWithCleanup(bool cleanup override)
PyObject* PyLabel_removeAllChildrenWithCleanup(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChild(Node *child, bool cleanup=true override)
PyObject* PyLabel_removeChild(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setGlobalZOrder(float globalZOrder override)
PyObject* PyLabel_setGlobalZOrder(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool setBMFontFilePath(const std::string &bmfontFilePath, const Vec2 &imageOffset=a class=el href=d1d9cclasscocos2d11vec2htmlac34a738465ac66deb5408b1550620324Vec2::ZEROa, float fontSize=0)
PyObject* PyLabel_setBMFontFilePath(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool setTTFConfig(const TTFConfig &ttfConfig)
PyObject* PyLabel_setTTFConfig(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const TTFConfig & getTTFConfig(const)
PyObject* PyLabel_getTTFConfig(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool setCharMap_1(Texture2D *texture, int itemWidth, int itemHeight, int startCharMap)
PyObject* PyLabel_setCharMap_1(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::string & getBMFontFilePath(const)
PyObject* PyLabel_getBMFontFilePath(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool setCharMap(const std::string &charMapFile, int itemWidth, int itemHeight, int startCharMap)
PyObject* PyLabel_setCharMap(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void visit(Renderer *renderer, const Mat4 &parentTransform, uint32t parentFlags override)
PyObject* PyLabel_visit(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool setCharMap_2(const std::string &plistFile)
PyObject* PyLabel_setCharMap_2(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSystemFontName(const std::string &font)
PyObject* PyLabel_setSystemFontName(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithSystemFont(const std::string &text, const std::string &font, float fontSize, const Size &dimensions=Size::ZERO, TextHAlignment hAlignment=TextHAlignment::LEFT, TextVAlignment vAlignment=TextVAlignment::TOP)
PyObject* PyLabel_createWithSystemFont(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual float getSystemFontSize(const)
PyObject* PyLabel_getSystemFontSize(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithCharMap_2(const std::string &plistFile)
PyObject* PyLabel_createWithCharMap_2(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithTTF(const std::string &text, const std::string &fontFilePath, float fontSize, const Size &dimensions=Size::ZERO, TextHAlignment hAlignment=TextHAlignment::LEFT, TextVAlignment vAlignment=TextVAlignment::TOP)
PyObject* PyLabel_createWithTTF(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithTTF_1(const TTFConfig &ttfConfig, const std::string &text, TextHAlignment hAlignment=TextHAlignment::LEFT, int maxLineWidth=0)
PyObject* PyLabel_createWithTTF_1(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithBMFont(const std::string &bmfontPath, const std::string &text, const TextHAlignment &hAlignment=TextHAlignment::LEFT, int maxLineWidth=0, const Vec2 &imageOffset=a class=el href=d1d9cclasscocos2d11vec2htmlac34a738465ac66deb5408b1550620324Vec2::ZEROa)
PyObject* PyLabel_createWithBMFont(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithCharMap(const std::string &charMapFile, int itemWidth, int itemHeight, int startCharMap)
PyObject* PyLabel_createWithCharMap(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * createWithCharMap_1(Texture2D *texture, int itemWidth, int itemHeight, int startCharMap)
PyObject* PyLabel_createWithCharMap_1(PyLabel *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void requestSystemFontRefresh()
PyObject* PyLabel_requestSystemFontRefresh(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Label * create()
PyObject* PyLabel_create(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual const std::string & getSystemFontName(const)
PyObject* PyLabel_getSystemFontName(PyLabel *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Label *dr = dynamic_cast<cocos2d::Label*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyLabel_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyLabel new Label");

    PyLabel *self;
    self = (PyLabel*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyLabel failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Label::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyLabel new Label %p",self->ob_body);

    return (PyObject*)self;
}

void PyLabel_Dealloc(PyLabel *self)
{
    PLOGD("=====PyLabel Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyLabel_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyLabel_methods[] = {
	{"setString",(PyCFunction)PyLabel_setString,METH_VARARGS,""},
	{"getStringNumLines",(PyCFunction)PyLabel_getStringNumLines,METH_NOARGS,""},
	{"getString",(PyCFunction)PyLabel_getString,METH_VARARGS,""},
	{"setTextColor",(PyCFunction)PyLabel_setTextColor,METH_VARARGS,""},
	{"getStringLength",(PyCFunction)PyLabel_getStringLength,METH_NOARGS,""},
	{"getTextColor",(PyCFunction)PyLabel_getTextColor,METH_NOARGS,""},
	{"enableShadow",(PyCFunction)PyLabel_enableShadow,METH_VARARGS,""},
	{"enableOutline",(PyCFunction)PyLabel_enableOutline,METH_VARARGS,""},
	{"enableGlow",(PyCFunction)PyLabel_enableGlow,METH_VARARGS,""},
	{"enableBold",(PyCFunction)PyLabel_enableBold,METH_NOARGS,""},
	{"enableUnderline",(PyCFunction)PyLabel_enableUnderline,METH_NOARGS,""},
	{"enableItalics",(PyCFunction)PyLabel_enableItalics,METH_NOARGS,""},
	{"disableEffect",(PyCFunction)PyLabel_disableEffect,METH_NOARGS,""},
	{"disableEffect_1",(PyCFunction)PyLabel_disableEffect_1,METH_VARARGS,""},
	{"isShadowEnabled",(PyCFunction)PyLabel_isShadowEnabled,METH_NOARGS,""},
	{"getShadowOffset",(PyCFunction)PyLabel_getShadowOffset,METH_NOARGS,""},
	{"getShadowBlurRadius",(PyCFunction)PyLabel_getShadowBlurRadius,METH_NOARGS,""},
	{"enableStrikethrough",(PyCFunction)PyLabel_enableStrikethrough,METH_NOARGS,""},
	{"getOutlineSize",(PyCFunction)PyLabel_getOutlineSize,METH_NOARGS,""},
	{"getShadowColor",(PyCFunction)PyLabel_getShadowColor,METH_NOARGS,""},
	{"getLabelEffectType",(PyCFunction)PyLabel_getLabelEffectType,METH_NOARGS,""},
	{"getEffectColor",(PyCFunction)PyLabel_getEffectColor,METH_NOARGS,""},
	{"setAlignment",(PyCFunction)PyLabel_setAlignment,METH_VARARGS,""},
	{"setAlignment_1",(PyCFunction)PyLabel_setAlignment_1,METH_VARARGS,""},
	{"setHorizontalAlignment",(PyCFunction)PyLabel_setHorizontalAlignment,METH_VARARGS,""},
	{"getHorizontalAlignment",(PyCFunction)PyLabel_getHorizontalAlignment,METH_NOARGS,""},
	{"getTextAlignment",(PyCFunction)PyLabel_getTextAlignment,METH_NOARGS,""},
	{"getVerticalAlignment",(PyCFunction)PyLabel_getVerticalAlignment,METH_NOARGS,""},
	{"setLineBreakWithoutSpace",(PyCFunction)PyLabel_setLineBreakWithoutSpace,METH_VARARGS,""},
	{"setVerticalAlignment",(PyCFunction)PyLabel_setVerticalAlignment,METH_VARARGS,""},
	{"setBMFontSize",(PyCFunction)PyLabel_setBMFontSize,METH_VARARGS,""},
	{"enableWrap",(PyCFunction)PyLabel_enableWrap,METH_VARARGS,""},
	{"getBMFontSize",(PyCFunction)PyLabel_getBMFontSize,METH_NOARGS,""},
	{"setOverflow",(PyCFunction)PyLabel_setOverflow,METH_VARARGS,""},
	{"setMaxLineWidth",(PyCFunction)PyLabel_setMaxLineWidth,METH_VARARGS,""},
	{"setWidth",(PyCFunction)PyLabel_setWidth,METH_VARARGS,""},
	{"isWrapEnabled",(PyCFunction)PyLabel_isWrapEnabled,METH_NOARGS,""},
	{"setHeight",(PyCFunction)PyLabel_setHeight,METH_VARARGS,""},
	{"setDimensions",(PyCFunction)PyLabel_setDimensions,METH_VARARGS,""},
	{"getOverflow",(PyCFunction)PyLabel_getOverflow,METH_NOARGS,""},
	{"setClipMarginEnabled",(PyCFunction)PyLabel_setClipMarginEnabled,METH_VARARGS,""},
	{"getLetter",(PyCFunction)PyLabel_getLetter,METH_VARARGS,""},
	{"setLineHeight",(PyCFunction)PyLabel_setLineHeight,METH_VARARGS,""},
	{"getLineHeight",(PyCFunction)PyLabel_getLineHeight,METH_NOARGS,""},
	{"setAdditionalKerning",(PyCFunction)PyLabel_setAdditionalKerning,METH_VARARGS,""},
	{"updateContent",(PyCFunction)PyLabel_updateContent,METH_NOARGS,""},
	{"getAdditionalKerning",(PyCFunction)PyLabel_getAdditionalKerning,METH_NOARGS,""},
	{"isOpacityModifyRGB",(PyCFunction)PyLabel_isOpacityModifyRGB,METH_VARARGS,""},
	{"setOpacityModifyRGB",(PyCFunction)PyLabel_setOpacityModifyRGB,METH_VARARGS,""},
	{"updateDisplayedColor",(PyCFunction)PyLabel_updateDisplayedColor,METH_VARARGS,""},
	{"updateDisplayedOpacity",(PyCFunction)PyLabel_updateDisplayedOpacity,METH_VARARGS,""},
	{"getDescription",(PyCFunction)PyLabel_getDescription,METH_VARARGS,""},
	{"getContentSize",(PyCFunction)PyLabel_getContentSize,METH_VARARGS,""},
	{"getBoundingBox",(PyCFunction)PyLabel_getBoundingBox,METH_VARARGS,""},
	{"draw",(PyCFunction)PyLabel_draw,METH_VARARGS,""},
	{"setCameraMask",(PyCFunction)PyLabel_setCameraMask,METH_VARARGS,""},
	{"removeAllChildrenWithCleanup",(PyCFunction)PyLabel_removeAllChildrenWithCleanup,METH_VARARGS,""},
	{"removeChild",(PyCFunction)PyLabel_removeChild,METH_VARARGS,""},
	{"setGlobalZOrder",(PyCFunction)PyLabel_setGlobalZOrder,METH_VARARGS,""},
	{"setBMFontFilePath",(PyCFunction)PyLabel_setBMFontFilePath,METH_VARARGS,""},
	{"setTTFConfig",(PyCFunction)PyLabel_setTTFConfig,METH_VARARGS,""},
	{"getTTFConfig",(PyCFunction)PyLabel_getTTFConfig,METH_NOARGS,""},
	{"setCharMap_1",(PyCFunction)PyLabel_setCharMap_1,METH_VARARGS,""},
	{"getBMFontFilePath",(PyCFunction)PyLabel_getBMFontFilePath,METH_NOARGS,""},
	{"setCharMap",(PyCFunction)PyLabel_setCharMap,METH_VARARGS,""},
	{"visit",(PyCFunction)PyLabel_visit,METH_VARARGS,""},
	{"setCharMap_2",(PyCFunction)PyLabel_setCharMap_2,METH_VARARGS,""},
	{"setSystemFontName",(PyCFunction)PyLabel_setSystemFontName,METH_VARARGS,""},
	{"createWithSystemFont",(PyCFunction)PyLabel_createWithSystemFont,METH_VARARGS,""},
	{"getSystemFontSize",(PyCFunction)PyLabel_getSystemFontSize,METH_NOARGS,""},
	{"createWithCharMap_2",(PyCFunction)PyLabel_createWithCharMap_2,METH_VARARGS,""},
	{"createWithTTF",(PyCFunction)PyLabel_createWithTTF,METH_VARARGS,""},
	{"createWithTTF_1",(PyCFunction)PyLabel_createWithTTF_1,METH_VARARGS,""},
	{"createWithBMFont",(PyCFunction)PyLabel_createWithBMFont,METH_VARARGS,""},
	{"createWithCharMap",(PyCFunction)PyLabel_createWithCharMap,METH_VARARGS,""},
	{"createWithCharMap_1",(PyCFunction)PyLabel_createWithCharMap_1,METH_VARARGS,""},
	{"requestSystemFontRefresh",(PyCFunction)PyLabel_requestSystemFontRefresh,METH_NOARGS,""},
	{"create",(PyCFunction)PyLabel_create,METH_NOARGS,""},
	{"getSystemFontName",(PyCFunction)PyLabel_getSystemFontName,METH_NOARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyLabelType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CLabel",                       /* tp_name */\
    sizeof(PyLabel),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyLabel_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyLabel_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyLabel_New,                     /* newfunc tp_new; */
};

}
