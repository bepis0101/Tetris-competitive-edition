#include <bits/stdc++.h>
#include "gameplay.h"
#include "game.h"
#include "player.h"
#include "time.h"

#include "ui.h"

#include <chrono>
#include <thread>

int main(int argc, char *argv[])
{
    Game game(HUMAN_VS_HUMAN);
    UI ui;

    ui.drawGame(game);
    ui.printContents();

    while(!game.checkForGameOver()){        
        if(game.gameLoop()){
            ui.drawGame(game);
        }
    }

    return 0;
}

/* 
TODO LIST / KNOWN ISUUES
* block can be transfered to holding cell inf times
* block collision problems
* sometimes global buffer overflow happens (but just sometimes, so its OK)
* UI could look better
* multiplayer doesn't work
* lack of story mode
*/
