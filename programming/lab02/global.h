const int MAX_STRING_SIZE = 100;
const float DEFAULT_PRICE = 0.0f;
const char* DEFAULT_TITLE = "How to spend a time doing nothing?";
const char* DEFAULT_AUTHOR = "Allan Walpy";
const int DEFAULT_YEAR = 1995;
const int DEFAULT_MOUNTH = 04;
const char* DEFAULT_SUBJECT = "Mathematics";
const int DEFAULT_GRADE = 9;

void Log(char* message);
void Log(char* massage, int value);

void PrintKeyValuePair(const char* key, const char* value);
void PrintKeyValuePair(const char* key, float value);
void PrintKeyValuePair(const char* key, int value);

void NewLine();
