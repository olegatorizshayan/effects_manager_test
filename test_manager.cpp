#include "effect_manager.h"
#include <vector>
#include <windows.h> 
#include <iostream>
#include <filesystem>
#include <list>
#include <string>


static std::vector<EffectInfo> g_effects;

//function for dll search 

EffectInfo::EffectInfo(std::string _effect_name)
	: effect_name(_effect_name)
{
}

EffectInfo::EffectInfo()
{
}

status_t initEffect()
{
	return 0;
}

std::vector<EffectInfo> getInitedEffects()
{
	return g_effects;
}

status_t getEffect(std::string name, EffectInfo& effect_info)
{
	for (auto codec : g_effects)
	{
		if (codec.effect_name == name)
		{
			effect_info = codec;
			return 0;
		}
	}

	return 1;
}
