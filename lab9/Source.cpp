#include "Header.h"

String^ delSpace(String^ str)
{
	str = str->Trim();
	while (str->IndexOf("  ") >= 0)
		str = str->Replace("  ", " ");
	return str;
}

String^ getStr(array<String^>^ arr, int& c)
{
	String^ out = "";
	for each (String ^ s in arr) {
		if (s->Length % 2 != 0)
		{
			int pos = floor(s->Length / 2);
			out += s->Remove(pos, 1) + " ";
			c++;
		}
		else
			out += s + " ";
	}
	return delSpace(out);
}

String^ logic(String^ in, int& count)
{
	delSpace(in);
	array <TCHAR>^ dlm = { ' ' };
	array <String^>^ words = in->Split(dlm);
	String^ out = getStr(words, count);
	return out;
}

String^ f(
	StreamReader^ sr, StreamWriter^ sw, 
	ListBox^ inBox, ListBox^ outBox)
{
	String^ in = "";
	String^ out = "";
	
	String^ minline = "";
	int minC = Int16::MaxValue;
	try
	{
		while (in = sr->ReadLine())
		{
			int c = 0;

			if (in->Length == 0)
				continue;

			inBox->Items->Add(in);
			out = logic(in,c);

			sw->WriteLine(out);
			outBox->Items->Add(out);

			if (c < minC) {
				minC = c;
				minline = in;
			}
		}
	}
	catch (Exception^ ex)		
	{
	MessageBox::Show(ex->Message, "Ошибка", 
		MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return minline;
}
