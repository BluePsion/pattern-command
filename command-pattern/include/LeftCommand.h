#ifndef LEFTCOMMAND_H
#define LEFTCOMMAND_H

#include <Command.h>


class LeftCommand : public Command
{
    public:
        LeftCommand();
        virtual ~LeftCommand();
        virtual void execute();


    protected:

    private:
};

#endif // LEFTCOMMAND_H
