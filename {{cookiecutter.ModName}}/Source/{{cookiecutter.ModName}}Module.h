#pragma once

#include "Modules/ModuleManager.h"

class F{{cookiecutter.ModName}}Module : public FDefaultGameModuleImpl {
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool IsGameModule() const override { return true; }
};