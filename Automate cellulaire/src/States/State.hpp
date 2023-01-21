#pragma once

#include "../Cell.hpp"

class State
{
public:
	State() = default;
	State(const State& cpy) = default;
	State& operator=(const State& cpy) = default;
	State(State&& move) = default;

	virtual ~State() = default;

	//Met � jour l'�tat de la cellule en calculant les probabilit�s qu'elle change d'�tat
	virtual void update() = 0;

	void setCell(Cell& cell);

private:
	Cell m_cell;
};