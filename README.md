Satisfactory Template Project
=============================

# Requirements

    pip install cookiecutter
 
    # Fork & Clone starter project
    git clone --recursive https://github.com/Delaunay/SatisfactoryModStarterProject StatisfactoryMod
    
    cd StatisfactoryMod/Extensions
    
    # Create a new mod
    cookiecutter https://github.com/Delaunay/SatisfactoryModCookieCutter
    ModName [MyMod]: MyAwesomeMod
    
    # Add the mod to the build system
    cd ..
    cd Source 
 
    notepad FactoryGame.Target.cs
    notepad FactoryGameEditor.Target.cs
    
    # Add Symlink to your source files
    cd ..
    python uproject.py --sym-link --force
