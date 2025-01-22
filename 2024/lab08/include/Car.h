#ifndef CAR_H
#define CAR_H

class Car 
{
    private:
        int id;
        bool state;
        double capacity;
        double consumption;
        double fuel;
    public:
        void SetID(int id);
        void SetState(bool state);
        void SetTankCapacity(double capacity);
        void SetConsumption(double consumption);
        double GetCapacity();
        void SetFuel(double fuel);
        void Presentation() const;
        void Drive(int distance);
        void Start();
        void Refuel(double fuel);
        void Stop();
};

#endif