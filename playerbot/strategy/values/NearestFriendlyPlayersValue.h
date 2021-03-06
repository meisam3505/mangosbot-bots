#pragma once
#include "../Value.h"
#include "NearestUnitsValue.h"
#include "../../PlayerbotAIConfig.h"

namespace ai
{
    class NearestFriendlyPlayersValue : public NearestUnitsValue
	{
	public:
        NearestFriendlyPlayersValue(PlayerbotAI* ai) :
          NearestUnitsValue(ai, "nearest friendly players", ai->GetRange("spell")) {}

    protected:
        void FindUnits(list<Unit*> &targets);
        bool AcceptUnit(Unit* unit);
	};
}
