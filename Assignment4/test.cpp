#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximus.h"

// <<
TEST(AutobotTest, ConstructorAndOutput) 
{
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot autobot("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);
    
    std::ostringstream os;
    os << autobot;
    EXPECT_EQ(os.str(), "Autobot. Name: Optimus, Type: Autobot, Strength: 500, Friend: Bumblebee, Beauty: 10)");
}

//comparing Transformer
TEST(ComparisonTest, TransformerComparison) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Transformer t1("Optimus", "Autobot", 500, weapon, &energy);
    Transformer t2("Megatron", "Decepticon", 600, weapon, &energy);
    Transformer t3("Bumblebee", "Autobot", 500, weapon, &energy);

    EXPECT_TRUE(t1 <= t2); 
    EXPECT_TRUE(t2 >= t1); 
    EXPECT_TRUE(t1 <= t3); 
    EXPECT_TRUE(t1 >= t3); 
}

//comparing Autobot
TEST(ComparisonTest, AutobotComparison) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot a1("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);
    Autobot a2("Bumblebee", "Autobot", 500, weapon, &energy, "Optimus", 15);
    Autobot a3("Cliffjumper", "Autobot", 400, weapon, &energy, "Optimus", 5);

    EXPECT_TRUE(a1 <= a2); 
    EXPECT_TRUE(a2 >= a1); 
    EXPECT_TRUE(a3 <= a1); 
    EXPECT_FALSE(a1 <= a3); 
}

// comparing Decepticon
TEST(ComparisonTest, DecepticonComparison) {
    Weapon weapon("Cannon", 150);
    Energy energy("Dark Energon");
    Decepticon d1("Megatron", "Decepticon", 600, weapon, &energy, "Optimus", 200);
    Decepticon d2("Starscream", "Decepticon", 600, weapon, &energy, "Optimus", 100);
    Decepticon d3("Soundwave", "Decepticon", 500, weapon, &energy, "Optimus", 50);

    EXPECT_TRUE(d2 <= d1); 
    EXPECT_TRUE(d1 >= d2); 
    EXPECT_TRUE(d3 <= d1); 
    EXPECT_FALSE(d1 <= d3); 
}

// comparing Maximus
TEST(ComparisonTest, MaximusComparison) {
    Weapon weapon("Sword", 80);
    Energy energy("Light Energon");
    Maximus m1("Maximus", "Autobot", 700, weapon, &energy, "Fire", 80);
    Maximus m2("Maximus Prime", "Autobot", 700, weapon, &energy, "Ice", 100);
    Maximus m3("Sentinel", "Autobot", 600, weapon, &energy, "Ice", 60);

    EXPECT_TRUE(m1 <= m2); 
    EXPECT_TRUE(m2 >= m1); 
    EXPECT_TRUE(m3 <= m1); 
    EXPECT_FALSE(m1 <= m3); 
}