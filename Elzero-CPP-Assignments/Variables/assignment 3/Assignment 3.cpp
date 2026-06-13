    /*                  << My Answeres>>
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ not Valid ] => Bad Practice ?
    __name      [ Valid ] => Bad Practice ?
    name@name   [ not valid ] => It's from Special Characters ?
    name10name  [ valid ] => Bad Practice ?
    name!name   [ not valid ] => It's from Special Characters ?
    first_NAME  [ Valid ] => Bad Practice ?
    first_name  [ Valid ] => Best Practice ?
    firstName   [ Valid ] => Bad Practice ?
    first name  [ Valid ] => Bad Practice ?
    fn          [ Valid ] => Best Practice ?
    public      [ not valid ] => It's From Reserved Words ?
    Public      [ Valid ] => It 's not From Reserved Words  Because of First Letter is Capltal ?
    
        The Final Result of Correction is :  %85.7
    */


    /*      << The Correction >>
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ Not Valid ] => Syntax Error (Cannot start with a number)
    __name      [ Valid | Bad Practice ] => Reserved for compiler/standard library
    name@name   [ Not Valid ] => Special Characters are not allowed
    name10name  [ Valid | Neutral ] => Depends if '10' has a clear meaning
    name!name   [ Not Valid ] => Special Characters are not allowed
    first_NAME  [ Valid | Bad Practice ] => Inconsistent casing
    first_name  [ Valid | Best Practice ] => (snake_case)
    firstName   [ Valid | Best Practice ] => (camelCase)
    first name  [ Not Valid ] => Spaces are not allowed in identifiers
    fn          [ Valid | Bad Practice ] => Too short, not descriptive
    public      [ Not Valid ] => Reserved Word (Keyword)
    Public      [ Valid | Bad Practice ] => Valid because of case-sensitivity, but confusing
    */