#pragma once

class figureException : public std::exception
{
protected:
	std::string exceptmsg;
public:
	figureException(const std::string& msg);

	const char* what() const noexcept override;
};