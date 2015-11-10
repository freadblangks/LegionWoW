////////////////////////////////////////////////////////////////////////////////
///
///  MILLENIUM-STUDIO
///  Copyright 2014-2015 Millenium-studio SARL
///  All Rights Reserved.
///
////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef SCRIPTING_INTERFACES_ENCOUNTER_HPP_INCLUDED
 #define SCRIPTING_INTERFACES_ENCOUNTER_HPP_INCLUDED

 #include "InterfaceBase.hpp"

/// Encounter Script Interface
class EncounterScript : public ScriptObjectImpl<false>
{
    protected:
        /// Constructor
        EncounterScript();

    public:
        /// Called when an Encounter is ended
        virtual void OnEncounterEnd(EncounterDatas const* p_EncounterDatas)
        {
            UNUSED(p_EncounterDatas);
        }
};

#endif  ///< SCRIPTING_INTERFACES_ENCOUNTER_HPP_INCLUDED