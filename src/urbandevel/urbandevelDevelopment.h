#ifndef urbandevelDevelopment_H
#define urbandevelDevelopment_H

#include <dmmodule.h>

class urbandevelDevelopment: public DM::Module
{
    DM_DECLARE_NODE(urbandevelDevelopment)
public:
    urbandevelDevelopment();
    ~urbandevelDevelopment();

    void run();
    void init();
private:
    DM::View city;
    DM::View superblock;
    DM::View cityblock;
    DM::View parcel;
};

#endif // urbandevelDevelopment_H
