#include "AgeCalc.h"
#include <QTextStream>
#include <iostream>
#include <QDebug>

AgeCalc::AgeCalc(QObject* parent)
{

}

int AgeCalc::getAge() const
{
	return m_age;
}

void AgeCalc::setAge(int age)
{
	m_age = age;
}

QString AgeCalc::getName() const
{
	return m_name;
}

void AgeCalc::setName(const QString &name)
{
	m_name = name;
}

int AgeCalc::dogYears() const 
{
	return m_age * 7;
	// return this->m_age * 7; use 'this' if naming conflict between member variables and local variables
}

int AgeCalc::catYears() const
{
	return m_age * 9;
}

int AgeCalc::humanYears() const
{
	return m_age;
}
