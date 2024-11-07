#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Energy.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximus.h"
// Create test fixture for Transformer
class TransformerTest: public::testing::Test
{
    protected:
    Weapon weapon;
    Energy* energy;

    TransformerTest()
    {
        weapon = Weapon("Blaster", 100);
        energy = new Energy("Energon");
    }

    ~TransformerTest()
    {
        delete energy;
    }
};

TEST_F(TransformerTest, ConstructorAndGetters)
    {
    Transformer transformer("Optimus", "Autobot", 500, weapon, energy);

    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getType(), "Autobot");
    EXPECT_EQ(transformer.getStrength(), 500);
    EXPECT_EQ(transformer.getWeapon().getType(), "Blaster");
    EXPECT_EQ(transformer.useEnergySource(), "Using energy source Energon");
    }

TEST_F(TransformerTest, Attack)
    {
    Transformer transformer("Bumblebee", "Autobot", 300, weapon, energy);
    EXPECT_EQ(transformer.attack(), "Attacking with Blaster");
    }

TEST_F(TransformerTest, DecepticonConstructor)
    {
    Decepticon decepticon("Megatron", "Decepticon", 1000, weapon, energy, "Optimus", 200);

    EXPECT_EQ(decepticon.getName(), "Megatron");
    EXPECT_EQ(decepticon.getTarget(), "Optimus");
    EXPECT_EQ(decepticon.getDamage(), 200);
    }

TEST_F(TransformerTest, AutobotConstructor)
    {
    Autobot autobot("Bumblebee", "Autobot", 300, weapon, energy, "Optimus", 50);

    EXPECT_EQ(autobot.getName(), "Bumblebee");
    EXPECT_EQ(autobot.getFriend(), "Optimus");
    EXPECT_EQ(autobot.getBeauty(), 50);
    }

TEST_F(TransformerTest, MaximusConstructor)
    {
    Maximus maximus("Maximus", "Autobot", 800, weapon, energy, "Weakness", 100);

    EXPECT_EQ(maximus.getVulnerability(), "Weakness");
    EXPECT_EQ(maximus.getSpeed(), 100);
    }
