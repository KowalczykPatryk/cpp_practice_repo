#ifndef SnowCannon_H
#define SnowCannon_H

class SnowCannon
{
    public:
        int id;
        bool state;
        double capacity;
        double consumption;
        double water;
        int amount;

        void SetID(int id);
        void SetState(bool state);
        void SetCapacity(double capacity);
        void SetConsumption(double consumption);
        void SetWater(double water);
        void Presentation();
        void Make(int snow);
        void Start();
        void Stop();
        void Reload(int water);
};

#endif // SnowCannon_H
