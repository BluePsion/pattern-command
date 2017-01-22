#ifndef UPCOMMAND_H
#define UPCOMMAND_H

#include <Command.h>


class UpCommand : public Command
{
    public:
        UpCommand();
        virtual ~UpCommand();
        virtual void execute();

    protected:

    private:
};

#endif // UPCOMMAND_H
