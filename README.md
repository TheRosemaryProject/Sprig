# Sprig MOVED TO MAIN ROSEMARY MONOREPO
## Rosemary Package Manager
## Actual Sprigs found at [this website](https://sprigrsmy.000webhostapp.com/)
### Creating a Package
- You need a JSON mainfest file. Here is an example:
```json
{
    "auths":[
        {"name":"werdl","org":"gonerogue"},
        {"name":"bot","org":null}
    ],
    "name":"example",
    "desc":"sprig example package",
    "version":"v0.0",
    "dependancy":null
}
```
- Ensure you put any dependancy you need in the right field.
- Make sure you set a good password for your sprig, it is not easy to change down the line.
### Commands
#### sprig pick \<NAME> DONE
- downloads  sprig \<NAME> and saves it as \<NAME>.rsmy
- pick as in PICK some rosemary
#### sprig prune \<NAME>
- Updates sprig \<NAME>
- prune as in PRUNE some rosemary
#### sprig build \<NAME> \<path/to/main.rsmy> \<path/to/manifest.json> \<path/to/passwd> DONE
- builds package \<NAME> using provided rsmy and JSON files. Throws an error if \<NAME> already exists.

#### sprig cut \<NAME>
- deletes \<NAME> from your system. Not from rsmy files you have written.
- cut as in remove some rosemary
#### sprig all
- lists your installed packages and their versions

#### sprig info \<NAME>
- parses the manifest.json file of \<NAME> and returns the data formatted

#### sprig purge \<NAME>
- removes all traces of \<NAME> including any dependencies

#### sprig update 
- updates sprig

#### sprig uproot 
- Removes sprig from your system
- uproot as in UPROOT some rosemary
#### sprig grow \<NAME> \<path/to/manifest.json> \<path/to/main.rsmy> passwd
- Pushes your code to existing package, with authentication required
- grow as in GROW some rosemary
#### sprig help
- Get help on commands
