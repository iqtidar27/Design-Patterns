#include "WeatherData.h"

void WeatherStation ::setState(float temp, float humidity, float pressure)
{
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    cout << endl;
    notifyObservers();
}

void WeatherStation ::registerObserver(Observer *observer)
{
    observers_.push_back(observer);
}

void WeatherStation ::unregisterObserver(Observer *observer)
{
    // Find the observer
    auto iterator = find(observers_.begin(), observers_.end(), observer);

    if (iterator != observers_.end())
    {
        observers_.erase(iterator); // remove the observer
    }
}

void WeatherStation ::notifyObservers()
{
    for (auto &observer : observers_) // Notify all the observers
    {
        observer->update(temp, humidity, pressure);
    }
}
