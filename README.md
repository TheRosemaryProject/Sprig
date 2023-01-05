# Sprig
## Rosemary Package Manager
## Actual Sprigs found at [this website](https://sprigrsmy.000webhostapp.com/)
### Commands

#### sprig pick \<NAME> DONE
- downloads  sprig \<NAME> and saves it as \<NAME>.rsmy

#### sprig prune \<NAME>
- Updates sprig \<NAME>

#### sprig build \<NAME> <path/to/main.rsmy> <path/to/manifest.json> \<path/to/passwd> DONE
- builds package \<NAME> using provided rsmy and JSON files. Throws an error if <NAME> already exists.

#### sprig cut \<NAME>
- deletes \<NAME> from your system. Not from rsmy files you have written.

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

#### sprig grow \<NAME> passwd <path/to/manifest.json> <path/to/main.rsmy>
- Pushes your code to existing package, with authentication required
