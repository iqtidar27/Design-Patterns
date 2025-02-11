#include "record.h"
#include "databaseRecord.h"
#include "contactRecorder.h"
#include "streamRecord.h"

int main()
{
    ContactData data = {"William", "Smith", "415-675-1874", "smith@email.com"};
    cout << "\nStreamRecorder: " << endl;

    StreamRecord sRecord(std ::cout, "Contact");
    ContactRecorder contact(&sRecord);
    contact.store(data);

    cout << "\nDatabase Recorder: " << endl;

    DatabaseRecord dbRecord;
    ContactRecorder contact2(&dbRecord);
    contact2.store(data);
}
