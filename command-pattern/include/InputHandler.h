#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "Command.h"

class InputHandler
{
    public:
        InputHandler();
        virtual ~InputHandler();
        void handleInput(); //Change to send keypress here: this method will not be called every cycle but instead will be called
                            //only when the player sends input. This is fine because our game is turn-based.

    protected:

    private:
        //The triggerable commands are here.
        //Trailing underscores to designate private data members: allows for easily written get/set methods
        //This feels odd using a keyboard to practice this pattern, but remember the original example used keys on a joystick:
        /*
            Command* buttonX_;
            Command* buttonY_;
            Command* buttonA_;
            Command* buttonB_;

            I've used vi keys in this example so that I'm not confused. In most games HLJK are not used for movement.
        */
        Command* keyH_; //vi left
        Command* keyL_; //vi right
        Command* keyK_; //vi up
        Command* keyJ_; //vi down
};

#endif // INPUTHANDLER_H
