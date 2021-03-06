//
//  GameMain.cpp
//  Game Framework
//
//  Created by numata on Dec 27, 2010.
//  Copyright 2010-2011 Sazameki and Satoshi Numata, Ph.D. All rights reserved.
//

#include "GameMain.h"

#include "TitleScene.h"
#include "FireScene.h"
#include "NoiseScene.h"
#include "Cube3DScene.h"
#include "DualScreenScene.h"


GameMain*   gGameInst = NULL;


GameMain::GameMain()
{
    gGameInst = this;
    
    ///// ゲームの初期化
    // TODO: ゲーム内で共通して利用する変数などがあれば、ここで準備してください。
    //
    // ★ GameMain クラスのインスタンスには、GameMain.h をインクルードして gGameInst 変数で参照します。
    //
    
    ///// シーンの追加
    // ★ 追加されたシーンは、ゲーム終了時に自動的に delete されます。自分で解放しようとしないでください。
    addScene("title", new TitleScene());
    addScene("fire", new FireScene());
    addScene("noise", new NoiseScene());
    addScene("cube3d", new Cube3DScene());
    addScene("dual", new DualScreenScene());
    
    ///// 最初のシーンの選択
    GMGame::ChangeScene("title");
}

GameMain::~GameMain()
{
    ///// ゲームの解放
    // TODO: ゲーム内で共通して利用していた変数などがあれば、ここで解放してください。
}

