#pragma once
#include <memory>
#include "lib/appEnv.hpp"

class cApp
{
public:

	//App������Ă���
	static std::shared_ptr<AppEnv> app_env;
};
