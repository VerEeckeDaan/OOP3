-Copy link from github (in SSH)

-Open powershell in map where you want to paste

-Command in powershell: git clone "URL"

-Content in .gitignore: *.exe
            
		*.o

-Opening code: File -> Open... -> "select code"

-Commit code: open Powershell in map that you pasted
          
	command in powershell: git status (optional (to see which files 
changed))
                     
		git add <file>
                     
		git commit -m "comment about the file"
                     
		git push origin master