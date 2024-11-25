#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"

TEST(AutobotTest, ConstructorAndOutput) 
{
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot autobot("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);
    
    std::ostringstream oss;
    oss << autobot;
    EXPECT_EQ(oss.str(), "Autobot. Name: Optimus, Type: Autobot, Strength: 500, Friend: Bumblebee, Beauty: 10)");
}

