using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IngredientUI : MonoBehaviour
{
    private Image image;
    private bool fill;
    BaseFood food;
    GameObject tick;

    public bool Fill { get => fill;  }
    public BaseFood Food { get => food; }

    private void Awake()
    {
        image = GetComponent<Image>();
        fill = false;
        tick = transform.GetChild(0).gameObject;
    }
    public void ClearImage()
    {
        image.sprite = null;
        fill = false;
        tick.SetActive(false);
    }

    public void ToggleEnableImage(bool e)
    {
        gameObject.SetActive(e);
    }

    public void AddImage(BaseFood s)
    {
        if(image != null)
        {
            food = s;
            image.sprite = s.foodSprite;
            fill = true;
        }
    }

    public void ToogleFoodTick(bool t)
    {
        tick.SetActive(t);
    }
}
