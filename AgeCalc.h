#pragma once
#include <qobject.h>

class AgeCalc : public QObject
{
	Q_OBJECT
public:
	explicit AgeCalc(QObject* parent = nullptr);

	int getAge() const;
	void setAge(int age);

	QString getName() const;
	void setName(const QString &name);

	int dogYears() const;
	int catYears() const;
	int humanYears() const;

	

private:
	int m_age;
	QString m_name;

signals:

};