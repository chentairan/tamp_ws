#include <vector>

namespace planning_util {

// internal trajectory representation
struct trajstruct{
    // state
    std::vector<float> s;
    std::vector<float> d;
    std::vector<float> deltapsi;
    std::vector<float> psidot;
    std::vector<float> vx;
    std::vector<float> vy;
    // ctrl
    std::vector<float> Fyf;
    std::vector<float> Fx;
    // od
    std::vector<float> kappac;
    bool colliding;
    float cost;
};


// internal state representation
struct statestruct{
    // state
    float s;
    float d;
    float deltapsi;
    float psidot;
    float vx;
    float vy;
};

// position constraint container
struct posconstrstruct{
    std::vector<float> slb;
    std::vector<float> sub;
    std::vector<float> dlb;
    std::vector<float> dub;
};

}; // END NAMESPACE