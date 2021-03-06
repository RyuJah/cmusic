//
//  mouseButton.h
//  Cmusic
//
//  Created by Arthur dubois on 08/12/2021.
//

#ifndef mouseButton_h
#define mouseButton_h

#include "common.h"
#include "initMedia.h"
#include "viewport.h"

#define BUTTON_WIDTH 200
#define BUTTON_HEIGHT 50
#define TOTAL_BUTTONS_LEFT_MENU 5
#define X_BUTTON_LEFT_MENU 0
#define Y_BUTTON_HOME 193
#define Y_BUTTON_NEW 243
#define Y_BUTTON_RANK 293
#define Y_BUTTON_PLAYLIST 343
#define Y_BUTTON_SETTING 518

#define BUTTON_BOTTOM_WIDTH 25
#define BUTTON_BOTTOM_HEIGHT 25

#define X_BUTTON_SHUFFLE 423
#define X_BUTTON_SKIP_LEFT 508
#define X_BUTTON_PLAY 553
#define X_BUTTON_SKIP_RIGHT 598
#define X_BUTTON_REPEAT 683
#define Y_BUTTON_BOTTOM_MENU 595.5


typedef enum LButtonEvent
{
    BUTTON_MOUSE_OUT = 0,
    BUTTON_MOUSE_DOWN = 2,
    BUTTON_MOUSE_UP = 3,
    BUTTON_TOTAL = 4
}LButtonEvent;


typedef struct LButton{
    //Top left position
    SDL_Point mPosition;

    //Currently used global sprite
    LButtonEvent mCurrentButton;
}LButton;

LButton gButtonsLeftMenu[ TOTAL_BUTTONS_LEFT_MENU];
LButton gButtonsBottomMenu[ TOTAL_BUTTONS_LEFT_MENU];



extern LTexture recSelected;
extern SDL_Rect recSelectedSize;

void initLButton(LButton *button);
void setPosition( LButton *button, int x, int y );
void handleEvent( LButton *button, SDL_Event* e, int width, int height );
void initButtonMenu(SDL_Event *e);

void setPositionButtonLeftMenu(void);
void setPositionButtonBottomMenu(void);

#endif /* mouseButton_h */
