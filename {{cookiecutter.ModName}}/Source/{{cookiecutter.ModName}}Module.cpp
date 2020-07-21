#include "{{cookiecutter.ModName}}Module.h"

#define LOCTEXT_NAMESPACE "FSMLModule"

#if WITH_EDITOR
#include "ContentBrowserModule.h"
#include "LevelEditor.h"
#include "Framework/Commands/Commands.h"
#include "MultiBoxBuilder.h"
#include "AssetRegistryModule.h"
#include "mod/toolkit/FGAssetGenerator.h"


void F{{cookiecutter.ModName}}Module::StartupModule() {
    SML::Logging::debug(TEXT("Registering {{cookiecutter.ModName}} Module"));
}

IMPLEMENT_GAME_MODULE(F{{cookiecutter.ModName}}Module, {{cookiecutter.ModName}});