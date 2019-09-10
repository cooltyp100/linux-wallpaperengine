#pragma once

#include <nlohmann/json.hpp>
#include <irrlicht/irrlicht.h>

namespace WallpaperEngine::Core::Objects::Particles
{
    using json = nlohmann::json;

    class CEmitter
    {
    public:
        static CEmitter* fromJSON (json data);

        const std::string& getName () const;
        const irr::u32 getDistanceMax () const;
        const irr::u32 getDistanceMin () const;
        const irr::core::vector3df& getDirections () const;
        const irr::core::vector3df& getOrigin () const;
        const irr::f64 getRate () const;
    protected:
        CEmitter (
            const irr::core::vector3df& directions,
            irr::u32 distancemax,
            irr::u32 distancemin,
            irr::u32 id,
            std::string name,
            const irr::core::vector3df& origin,
            irr::f64 rate
        );
    private:
        irr::core::vector3df m_directions;
        irr::u32 m_distancemax;
        irr::u32 m_distancemin;
        irr::u32 m_id;
        std::string m_name;
        irr::core::vector3df m_origin;
        irr::f64 m_rate;
    };
};