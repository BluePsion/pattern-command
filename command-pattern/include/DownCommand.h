#ifndef DOWNCOMMAND_H
#define DOWNCOMMAND_H

#include <Command.h>


class DownCommand : public Command
{
    public:
        DownCommand();
        virtual ~DownCommand();
        virtual void execute();

    protected:

    private:
};

#endif // DOWNCOMMAND_H
