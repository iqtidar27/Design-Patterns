#pragma once
#include "dataStorage.h"

class SDCard_USB_Adapter : public USB
{
public:
    SDCard_USB_Adapter(SDCard *sdcard) : USB(-1)
    {
        this->sdcard_ = sdcard;
    }

    int USB_Transmit() override
    {
        return sdcard_->SDCard_Transmit();
    }

private:
    SDCard *sdcard_;
};