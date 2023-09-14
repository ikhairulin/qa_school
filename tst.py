import re

string = '"data":{"status":"200","email":"petya.nikolayev.989@mail.ru","body":{"token":"faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0"'

pattern = r'email\":\".*@.*\",\"body\":{\"token\":\"(.*)\"'

match = re.search(pattern, string)
if match:
    print(match.group(1))
else:
    print("False")
