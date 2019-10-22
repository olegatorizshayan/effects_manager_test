#pragma once
#include <string>
#include <functional>
#include <thread>
#include <vector>

struct EffectInfo
{
	std::string effect_name;
	//LoadFileProc_t load_file_proc;
	//SaveFileProc_t save_file_proc;

	EffectInfo(std::string _effect_name);// , LoadFileProc_t _load_file_proc, SaveFileProc_t _save_file_proc);
	EffectInfo();
};

typedef uint8_t status_t;
status_t initEffect();
std::vector<EffectInfo> getInitedEffects();
status_t getEffect(std::string name, EffectInfo& codec_info);