#pragma once
#include <memory>
#include "lib/appEnv.hpp"

class cApp
{
public:

	//Appを取ってくる
	static std::shared_ptr<AppEnv> app_env;
};
