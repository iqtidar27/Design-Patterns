#include "dataStorage.h"
#include "dataReader.h"
#include "sdcardUSBAdapter.h"

int main()
{
    DataReader reader;

    USB *usb = new USB(5);
    reader.ReadDataFromStorage(usb);

    SDCard *sdcard = new SDCard(10);
    // reader.ReadDataFromStorage(sdcard); Will throw error
    USB *adapter = new SDCard_USB_Adapter(sdcard);
    reader.ReadDataFromStorage(adapter);
}