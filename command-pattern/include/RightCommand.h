#ifndef RIGHTCOMMAND_H
#define RIGHTCOMMAND_H

#include <Command.h>


class RightCommand : public Command
{
    public:
        RightCommand();
        virtual ~RightCommand();
        virtual void execute();

    protected:

    private:
};

#endif // RIGHTCOMMAND_H
