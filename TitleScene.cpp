#include "TitleScene.h"
#include <Novice.h>

void TitleScene::Initialize() {}

// コンストラクタや初期化でシーン番号のポインタを受け取る想定

void TitleScene::Update(char* keys, char* preKeys) {
    // スペースキーで次のシーンへ
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        sceneNo = STAGE;   // 次のシーン番号へ切り替え
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Current Scene : Title");
    Novice::ScreenPrintf(0, 30, "Push Space : Next Scene");
}
