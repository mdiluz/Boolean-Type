//Public Interface:
typedef bool Boolean;

Boolean True = true;
Boolean False = false;

bool Equal(Boolean boolean1, Boolean boolean2) {
    return boolean1 == boolean2;
}

int main()
{
    return Equal(True, True) && Equal(False, True);
}
