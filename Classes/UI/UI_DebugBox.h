#ifndef UI_DebugBox_h__
#define UI_DebugBox_h__

#include "cocos2d.h"
#include "ui\CocosGUI.h"

class UI_DebugBox : public cocos2d::Node {
public:
	static UI_DebugBox * create() {
		UI_DebugBox * pRet = new(std::nothrow) UI_DebugBox();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	void addLog(const std::string & log);
protected:
	UI_DebugBox() = default;
private:
	int m_counter;
	cocos2d::ui::ListView * m_listView;
	cocos2d::ui::TextField * m_lineEdit;
};
#endif // UI_DebugBox_h__
