using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Trivial script that fills the label's contents gradually, as if someone was typing.
/// </summary>

[RequireComponent(typeof(Text))]
[AddComponentMenu("uGUI/Typewriter Effect")]
public class TypewriterEffect : MonoBehaviour
{
	public int charsPerSecond = 40;

	Text mLabel;
	string mText;
	int mOffset = 0;
	float mNextChar = 0f;
    public bool isTyped = false;

    public int maxLength = 13;

    public int totalTime = 0;

    void Awake(){
		totalTime = GetComponent<Text>().text.Length * charsPerSecond;
		mText = GetComponent<Text> ().text;

    }
    void Start() {
		GetComponent<Text> ().text = "";
        isTyped = false;
    }
	void Update ()
	{
        if (mLabel == null)
        {
			mLabel = GetComponent<Text>();
        }

        
            if (mOffset < mText.Length)
            {
				
                if (mNextChar <= Time.time)
                {
                    charsPerSecond = Mathf.Max(1, charsPerSecond);

                    // Periods and end-of-line characters should pause for a longer time.
                    float delay = 1f / charsPerSecond;
                    char c = mText[mOffset];
                    if (c == '.' || c == '\n' || c == '!' || c == '?') delay *= 4f;

                    mNextChar = Time.time + delay;

                    mLabel.text = mText.Substring(0, ++mOffset);
                }
            }
            else
            {
                checkedType();
            }

	}

    void checkedType() {
        isTyped = true;
    }



    
}
