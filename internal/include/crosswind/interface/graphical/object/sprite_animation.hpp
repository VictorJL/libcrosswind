#pragma once

#include <memory>
#include <vector>

#include <crosswind/interface/graphical/detail/sprite.hpp>

namespace cw{
namespace interface{
namespace graphical{
namespace object{

    class sprite_animation;

}// namespace object
}// namespace graphical
}// namespace interface
}// namespace cw

class cw::interface::graphical::object::sprite_animation{
public:

    sprite_animation(){
        current_frame = 0;
        x_orientation = true;
    }

    virtual void flip(bool default_x) = 0;


    bool x_orientation;
    float duration;
    unsigned int current_frame;
    std::vector<std::shared_ptr<detail::sprite> > frames;
    
};// class sprite_animation