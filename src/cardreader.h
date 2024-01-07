#ifndef CARDREADER_H
#define CARDREADER_H

#include "stationcomponent.h"

/* A CardReader object is used for interacting with and receiving data from the station's built-in card reader. */
class CardReader : public StationComponent
{
    //Q_OBJECT
public:
    explicit CardReader(StationComponent *parent = nullptr);

signals:
    // Signal for when a card is swiped
    void swiped();
    // Signal for when card is insertted into the chip reader
    void inserted();
    // Signal for when a card is removed from the chip reader
    void removed();
    // Signal for when a card is tapped with NFC
    void tapped();
    // Signal for when a debit card is swiped
    void debit();
    // Signal for when a credit card is swiped
    void credit();
    // Signal for when a gift card is swiped
    void giftCard();
    // Signal for when payment method is mobile pay
    void mobilePay();
    // Signal for when cashback is requested for a specific amount
    void cashbackRequested(double amount);
    // Signal for when a keypad button was pressed
    void pinpadKeyPressed(QString &key);
    // Signal for when the screen of the card reader is pressed
    void screenPressed();
    // Signal for when the user's PIN is requested
    void pinRequested();
    // Signal for when the user cancels the PIN operation
    void pinCanceled();
    // Signal for when the user inputs a correct PIN
    void pinAccepted();
    // Signal for when the user inputs an incorrect PIN
    void pinRejected();
    // Signal for if the transaction is confirmed
    void transactionConfirmed();
    // Signal for if the transaction was declined
    void transactionDeclined();

    // Signal for any errors that occur while using the card reader
    void error(QString &msg);
};

#endif // CARDREADER_H
