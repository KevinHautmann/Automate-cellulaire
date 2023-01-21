#pragma once

#include "Ashes.hpp"
#include "State.hpp"

class Ashes : public State
{
public:
	Ashes() = default;
	Ashes(const Ashes& cpy) = default;
	Ashes& operator=(const Ashes& cpy) = default;
	Ashes(Ashes&& move) = default;

	virtual ~Ashes() = default;

	void update() override;
};