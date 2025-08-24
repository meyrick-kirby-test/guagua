@('*.exe', '*.ilk', '*.obj', '*.pdb') |
    ForEach-Object { Get-ChildItem -Path . -Recurse -Filter $_ } |
    Remove-Item
